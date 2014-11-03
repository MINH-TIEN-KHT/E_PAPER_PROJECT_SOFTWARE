// MESSAGE REFRESH_DISPLAY PACKING

#define MAVLINK_MSG_ID_REFRESH_DISPLAY 10

typedef struct __mavlink_refresh_display_t
{
 uint16_t masteraddress; ///< Master's address
 uint16_t slaveraddress; ///< Slaver's address
} mavlink_refresh_display_t;

#define MAVLINK_MSG_ID_REFRESH_DISPLAY_LEN 4
#define MAVLINK_MSG_ID_10_LEN 4



#define MAVLINK_MESSAGE_INFO_REFRESH_DISPLAY { \
	"REFRESH_DISPLAY", \
	2, \
	{  { "masteraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_refresh_display_t, masteraddress) }, \
         { "slaveraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_refresh_display_t, slaveraddress) }, \
         } \
}


/**
 * @brief Pack a refresh_display message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_refresh_display_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t masteraddress, uint16_t slaveraddress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[4];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 4);
#else
	mavlink_refresh_display_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 4);
#endif

	msg->msgid = MAVLINK_MSG_ID_REFRESH_DISPLAY;
	return mavlink_finalize_message(msg, system_id, component_id, 4, 222);
}

/**
 * @brief Pack a refresh_display message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_refresh_display_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t masteraddress,uint16_t slaveraddress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[4];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 4);
#else
	mavlink_refresh_display_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 4);
#endif

	msg->msgid = MAVLINK_MSG_ID_REFRESH_DISPLAY;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 4, 222);
}

/**
 * @brief Encode a refresh_display struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param refresh_display C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_refresh_display_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_refresh_display_t* refresh_display)
{
	return mavlink_msg_refresh_display_pack(system_id, component_id, msg, refresh_display->masteraddress, refresh_display->slaveraddress);
}

/**
 * @brief Send a refresh_display message
 * @param chan MAVLink channel to send the message
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_refresh_display_send(mavlink_channel_t chan, uint16_t masteraddress, uint16_t slaveraddress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[4];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REFRESH_DISPLAY, buf, 4, 222);
#else
	mavlink_refresh_display_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REFRESH_DISPLAY, (const char *)&packet, 4, 222);
#endif
}

#endif

// MESSAGE REFRESH_DISPLAY UNPACKING


/**
 * @brief Get field masteraddress from refresh_display message
 *
 * @return Master's address
 */
static inline uint16_t mavlink_msg_refresh_display_get_masteraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field slaveraddress from refresh_display message
 *
 * @return Slaver's address
 */
static inline uint16_t mavlink_msg_refresh_display_get_slaveraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Decode a refresh_display message into a struct
 *
 * @param msg The message to decode
 * @param refresh_display C-struct to decode the message contents into
 */
static inline void mavlink_msg_refresh_display_decode(const mavlink_message_t* msg, mavlink_refresh_display_t* refresh_display)
{
#if MAVLINK_NEED_BYTE_SWAP
	refresh_display->masteraddress = mavlink_msg_refresh_display_get_masteraddress(msg);
	refresh_display->slaveraddress = mavlink_msg_refresh_display_get_slaveraddress(msg);
#else
	memcpy(refresh_display, _MAV_PAYLOAD(msg), 4);
#endif
}
