// MESSAGE CLEAR_DISPLAY PACKING

#define MAVLINK_MSG_ID_CLEAR_DISPLAY 11

typedef struct __mavlink_clear_display_t
{
 uint16_t masteraddress; ///< Master's address
 uint16_t slaveraddress; ///< Slaver's address
 uint16_t color; ///< color of the background
} mavlink_clear_display_t;

#define MAVLINK_MSG_ID_CLEAR_DISPLAY_LEN 6
#define MAVLINK_MSG_ID_11_LEN 6



#define MAVLINK_MESSAGE_INFO_CLEAR_DISPLAY { \
	"CLEAR_DISPLAY", \
	3, \
	{  { "masteraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_clear_display_t, masteraddress) }, \
         { "slaveraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_clear_display_t, slaveraddress) }, \
         { "color", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_clear_display_t, color) }, \
         } \
}


/**
 * @brief Pack a clear_display message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param color color of the background
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_clear_display_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t masteraddress, uint16_t slaveraddress, uint16_t color)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[6];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, color);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 6);
#else
	mavlink_clear_display_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.color = color;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 6);
#endif

	msg->msgid = MAVLINK_MSG_ID_CLEAR_DISPLAY;
	return mavlink_finalize_message(msg, system_id, component_id, 6, 85);
}

/**
 * @brief Pack a clear_display message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param color color of the background
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_clear_display_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t masteraddress,uint16_t slaveraddress,uint16_t color)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[6];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, color);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 6);
#else
	mavlink_clear_display_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.color = color;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 6);
#endif

	msg->msgid = MAVLINK_MSG_ID_CLEAR_DISPLAY;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 6, 85);
}

/**
 * @brief Encode a clear_display struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param clear_display C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_clear_display_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_clear_display_t* clear_display)
{
	return mavlink_msg_clear_display_pack(system_id, component_id, msg, clear_display->masteraddress, clear_display->slaveraddress, clear_display->color);
}

/**
 * @brief Send a clear_display message
 * @param chan MAVLink channel to send the message
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param color color of the background
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_clear_display_send(mavlink_channel_t chan, uint16_t masteraddress, uint16_t slaveraddress, uint16_t color)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[6];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, color);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CLEAR_DISPLAY, buf, 6, 85);
#else
	mavlink_clear_display_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.color = color;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CLEAR_DISPLAY, (const char *)&packet, 6, 85);
#endif
}

#endif

// MESSAGE CLEAR_DISPLAY UNPACKING


/**
 * @brief Get field masteraddress from clear_display message
 *
 * @return Master's address
 */
static inline uint16_t mavlink_msg_clear_display_get_masteraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field slaveraddress from clear_display message
 *
 * @return Slaver's address
 */
static inline uint16_t mavlink_msg_clear_display_get_slaveraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field color from clear_display message
 *
 * @return color of the background
 */
static inline uint16_t mavlink_msg_clear_display_get_color(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Decode a clear_display message into a struct
 *
 * @param msg The message to decode
 * @param clear_display C-struct to decode the message contents into
 */
static inline void mavlink_msg_clear_display_decode(const mavlink_message_t* msg, mavlink_clear_display_t* clear_display)
{
#if MAVLINK_NEED_BYTE_SWAP
	clear_display->masteraddress = mavlink_msg_clear_display_get_masteraddress(msg);
	clear_display->slaveraddress = mavlink_msg_clear_display_get_slaveraddress(msg);
	clear_display->color = mavlink_msg_clear_display_get_color(msg);
#else
	memcpy(clear_display, _MAV_PAYLOAD(msg), 6);
#endif
}
