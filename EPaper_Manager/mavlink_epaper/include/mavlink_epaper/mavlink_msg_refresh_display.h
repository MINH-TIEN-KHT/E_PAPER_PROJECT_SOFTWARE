// MESSAGE REFRESH_DISPLAY PACKING

#define MAVLINK_MSG_ID_REFRESH_DISPLAY 10

typedef struct __mavlink_refresh_display_t
{
 uint8_t dummy; ///< dummy data
} mavlink_refresh_display_t;

#define MAVLINK_MSG_ID_REFRESH_DISPLAY_LEN 1
#define MAVLINK_MSG_ID_10_LEN 1



#define MAVLINK_MESSAGE_INFO_REFRESH_DISPLAY { \
	"REFRESH_DISPLAY", \
	1, \
	{  { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_refresh_display_t, dummy) }, \
         } \
}


/**
 * @brief Pack a refresh_display message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param dummy dummy data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_refresh_display_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[1];
	_mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 1);
#else
	mavlink_refresh_display_t packet;
	packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 1);
#endif

	msg->msgid = MAVLINK_MSG_ID_REFRESH_DISPLAY;
	return mavlink_finalize_message(msg, system_id, component_id, 1, 129);
}

/**
 * @brief Pack a refresh_display message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param dummy dummy data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_refresh_display_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[1];
	_mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 1);
#else
	mavlink_refresh_display_t packet;
	packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 1);
#endif

	msg->msgid = MAVLINK_MSG_ID_REFRESH_DISPLAY;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 1, 129);
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
	return mavlink_msg_refresh_display_pack(system_id, component_id, msg, refresh_display->dummy);
}

/**
 * @brief Send a refresh_display message
 * @param chan MAVLink channel to send the message
 *
 * @param dummy dummy data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_refresh_display_send(mavlink_channel_t chan, uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[1];
	_mav_put_uint8_t(buf, 0, dummy);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REFRESH_DISPLAY, buf, 1, 129);
#else
	mavlink_refresh_display_t packet;
	packet.dummy = dummy;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REFRESH_DISPLAY, (const char *)&packet, 1, 129);
#endif
}

#endif

// MESSAGE REFRESH_DISPLAY UNPACKING


/**
 * @brief Get field dummy from refresh_display message
 *
 * @return dummy data
 */
static inline uint8_t mavlink_msg_refresh_display_get_dummy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
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
	refresh_display->dummy = mavlink_msg_refresh_display_get_dummy(msg);
#else
	memcpy(refresh_display, _MAV_PAYLOAD(msg), 1);
#endif
}
