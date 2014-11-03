// MESSAGE DISPLAY_STRING PACKING

#define MAVLINK_MSG_ID_DISPLAY_STRING 4

typedef struct __mavlink_display_string_t
{
 uint16_t masteraddress; ///< Master's address
 uint16_t slaveraddress; ///< Slaver's address
 uint16_t xpos; ///< X position
 uint16_t ypos; ///< Y position
 uint8_t font; ///< specifies the layer font to be used
 uint8_t mode; ///< display mode
 uint8_t datalength; ///< string data length in package
 char text[240]; ///< string data
} mavlink_display_string_t;

#define MAVLINK_MSG_ID_DISPLAY_STRING_LEN 251
#define MAVLINK_MSG_ID_4_LEN 251

#define MAVLINK_MSG_DISPLAY_STRING_FIELD_TEXT_LEN 240

#define MAVLINK_MESSAGE_INFO_DISPLAY_STRING { \
	"DISPLAY_STRING", \
	8, \
	{  { "masteraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_display_string_t, masteraddress) }, \
         { "slaveraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_display_string_t, slaveraddress) }, \
         { "xpos", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_display_string_t, xpos) }, \
         { "ypos", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_display_string_t, ypos) }, \
         { "font", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_display_string_t, font) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_display_string_t, mode) }, \
         { "datalength", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_display_string_t, datalength) }, \
         { "text", NULL, MAVLINK_TYPE_CHAR, 240, 11, offsetof(mavlink_display_string_t, text) }, \
         } \
}


/**
 * @brief Pack a display_string message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position
 * @param ypos Y position
 * @param font specifies the layer font to be used
 * @param mode display mode
 * @param datalength string data length in package
 * @param text string data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_display_string_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t masteraddress, uint16_t slaveraddress, uint16_t xpos, uint16_t ypos, uint8_t font, uint8_t mode, uint8_t datalength, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[251];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint8_t(buf, 8, font);
	_mav_put_uint8_t(buf, 9, mode);
	_mav_put_uint8_t(buf, 10, datalength);
	_mav_put_char_array(buf, 11, text, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 251);
#else
	mavlink_display_string_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.font = font;
	packet.mode = mode;
	packet.datalength = datalength;
	mav_array_memcpy(packet.text, text, sizeof(char)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 251);
#endif

	msg->msgid = MAVLINK_MSG_ID_DISPLAY_STRING;
	return mavlink_finalize_message(msg, system_id, component_id, 251, 95);
}

/**
 * @brief Pack a display_string message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position
 * @param ypos Y position
 * @param font specifies the layer font to be used
 * @param mode display mode
 * @param datalength string data length in package
 * @param text string data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_display_string_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t masteraddress,uint16_t slaveraddress,uint16_t xpos,uint16_t ypos,uint8_t font,uint8_t mode,uint8_t datalength,const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[251];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint8_t(buf, 8, font);
	_mav_put_uint8_t(buf, 9, mode);
	_mav_put_uint8_t(buf, 10, datalength);
	_mav_put_char_array(buf, 11, text, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 251);
#else
	mavlink_display_string_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.font = font;
	packet.mode = mode;
	packet.datalength = datalength;
	mav_array_memcpy(packet.text, text, sizeof(char)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 251);
#endif

	msg->msgid = MAVLINK_MSG_ID_DISPLAY_STRING;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 251, 95);
}

/**
 * @brief Encode a display_string struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param display_string C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_display_string_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_display_string_t* display_string)
{
	return mavlink_msg_display_string_pack(system_id, component_id, msg, display_string->masteraddress, display_string->slaveraddress, display_string->xpos, display_string->ypos, display_string->font, display_string->mode, display_string->datalength, display_string->text);
}

/**
 * @brief Send a display_string message
 * @param chan MAVLink channel to send the message
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position
 * @param ypos Y position
 * @param font specifies the layer font to be used
 * @param mode display mode
 * @param datalength string data length in package
 * @param text string data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_display_string_send(mavlink_channel_t chan, uint16_t masteraddress, uint16_t slaveraddress, uint16_t xpos, uint16_t ypos, uint8_t font, uint8_t mode, uint8_t datalength, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[251];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint8_t(buf, 8, font);
	_mav_put_uint8_t(buf, 9, mode);
	_mav_put_uint8_t(buf, 10, datalength);
	_mav_put_char_array(buf, 11, text, 240);
	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISPLAY_STRING, buf, 251, 95);
#else
	mavlink_display_string_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.font = font;
	packet.mode = mode;
	packet.datalength = datalength;
	mav_array_memcpy(packet.text, text, sizeof(char)*240);
	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISPLAY_STRING, (const char *)&packet, 251, 95);
#endif
}

#endif

// MESSAGE DISPLAY_STRING UNPACKING


/**
 * @brief Get field masteraddress from display_string message
 *
 * @return Master's address
 */
static inline uint16_t mavlink_msg_display_string_get_masteraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field slaveraddress from display_string message
 *
 * @return Slaver's address
 */
static inline uint16_t mavlink_msg_display_string_get_slaveraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field xpos from display_string message
 *
 * @return X position
 */
static inline uint16_t mavlink_msg_display_string_get_xpos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field ypos from display_string message
 *
 * @return Y position
 */
static inline uint16_t mavlink_msg_display_string_get_ypos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field font from display_string message
 *
 * @return specifies the layer font to be used
 */
static inline uint8_t mavlink_msg_display_string_get_font(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field mode from display_string message
 *
 * @return display mode
 */
static inline uint8_t mavlink_msg_display_string_get_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field datalength from display_string message
 *
 * @return string data length in package
 */
static inline uint8_t mavlink_msg_display_string_get_datalength(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field text from display_string message
 *
 * @return string data
 */
static inline uint16_t mavlink_msg_display_string_get_text(const mavlink_message_t* msg, char *text)
{
	return _MAV_RETURN_char_array(msg, text, 240,  11);
}

/**
 * @brief Decode a display_string message into a struct
 *
 * @param msg The message to decode
 * @param display_string C-struct to decode the message contents into
 */
static inline void mavlink_msg_display_string_decode(const mavlink_message_t* msg, mavlink_display_string_t* display_string)
{
#if MAVLINK_NEED_BYTE_SWAP
	display_string->masteraddress = mavlink_msg_display_string_get_masteraddress(msg);
	display_string->slaveraddress = mavlink_msg_display_string_get_slaveraddress(msg);
	display_string->xpos = mavlink_msg_display_string_get_xpos(msg);
	display_string->ypos = mavlink_msg_display_string_get_ypos(msg);
	display_string->font = mavlink_msg_display_string_get_font(msg);
	display_string->mode = mavlink_msg_display_string_get_mode(msg);
	display_string->datalength = mavlink_msg_display_string_get_datalength(msg);
	mavlink_msg_display_string_get_text(msg, display_string->text);
#else
	memcpy(display_string, _MAV_PAYLOAD(msg), 251);
#endif
}
