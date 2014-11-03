// MESSAGE SET_FONT PACKING

#define MAVLINK_MSG_ID_SET_FONT 12

typedef struct __mavlink_set_font_t
{
 uint16_t masteraddress; ///< Master's address
 uint16_t slaveraddress; ///< Slaver's address
 uint8_t font; ///< specifies the layer font to be used
} mavlink_set_font_t;

#define MAVLINK_MSG_ID_SET_FONT_LEN 5
#define MAVLINK_MSG_ID_12_LEN 5



#define MAVLINK_MESSAGE_INFO_SET_FONT { \
	"SET_FONT", \
	3, \
	{  { "masteraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_set_font_t, masteraddress) }, \
         { "slaveraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_set_font_t, slaveraddress) }, \
         { "font", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_set_font_t, font) }, \
         } \
}


/**
 * @brief Pack a set_font message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param font specifies the layer font to be used
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_font_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t masteraddress, uint16_t slaveraddress, uint8_t font)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[5];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint8_t(buf, 4, font);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 5);
#else
	mavlink_set_font_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.font = font;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 5);
#endif

	msg->msgid = MAVLINK_MSG_ID_SET_FONT;
	return mavlink_finalize_message(msg, system_id, component_id, 5, 36);
}

/**
 * @brief Pack a set_font message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param font specifies the layer font to be used
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_font_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t masteraddress,uint16_t slaveraddress,uint8_t font)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[5];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint8_t(buf, 4, font);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 5);
#else
	mavlink_set_font_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.font = font;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 5);
#endif

	msg->msgid = MAVLINK_MSG_ID_SET_FONT;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 5, 36);
}

/**
 * @brief Encode a set_font struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_font C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_font_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_font_t* set_font)
{
	return mavlink_msg_set_font_pack(system_id, component_id, msg, set_font->masteraddress, set_font->slaveraddress, set_font->font);
}

/**
 * @brief Send a set_font message
 * @param chan MAVLink channel to send the message
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param font specifies the layer font to be used
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_font_send(mavlink_channel_t chan, uint16_t masteraddress, uint16_t slaveraddress, uint8_t font)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[5];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint8_t(buf, 4, font);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_FONT, buf, 5, 36);
#else
	mavlink_set_font_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.font = font;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_FONT, (const char *)&packet, 5, 36);
#endif
}

#endif

// MESSAGE SET_FONT UNPACKING


/**
 * @brief Get field masteraddress from set_font message
 *
 * @return Master's address
 */
static inline uint16_t mavlink_msg_set_font_get_masteraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field slaveraddress from set_font message
 *
 * @return Slaver's address
 */
static inline uint16_t mavlink_msg_set_font_get_slaveraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field font from set_font message
 *
 * @return specifies the layer font to be used
 */
static inline uint8_t mavlink_msg_set_font_get_font(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a set_font message into a struct
 *
 * @param msg The message to decode
 * @param set_font C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_font_decode(const mavlink_message_t* msg, mavlink_set_font_t* set_font)
{
#if MAVLINK_NEED_BYTE_SWAP
	set_font->masteraddress = mavlink_msg_set_font_get_masteraddress(msg);
	set_font->slaveraddress = mavlink_msg_set_font_get_slaveraddress(msg);
	set_font->font = mavlink_msg_set_font_get_font(msg);
#else
	memcpy(set_font, _MAV_PAYLOAD(msg), 5);
#endif
}
