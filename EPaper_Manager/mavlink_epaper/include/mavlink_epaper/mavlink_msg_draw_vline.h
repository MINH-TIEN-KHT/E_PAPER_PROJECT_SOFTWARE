// MESSAGE DRAW_VLINE PACKING

#define MAVLINK_MSG_ID_DRAW_VLINE 6

typedef struct __mavlink_draw_vline_t
{
 uint16_t xpos; ///< X position
 uint16_t ypos; ///< Y position
 uint16_t length; ///< line length
} mavlink_draw_vline_t;

#define MAVLINK_MSG_ID_DRAW_VLINE_LEN 6
#define MAVLINK_MSG_ID_6_LEN 6



#define MAVLINK_MESSAGE_INFO_DRAW_VLINE { \
	"DRAW_VLINE", \
	3, \
	{  { "xpos", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_draw_vline_t, xpos) }, \
         { "ypos", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_draw_vline_t, ypos) }, \
         { "length", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_draw_vline_t, length) }, \
         } \
}


/**
 * @brief Pack a draw_vline message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param xpos X position
 * @param ypos Y position
 * @param length line length
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_draw_vline_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t xpos, uint16_t ypos, uint16_t length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[6];
	_mav_put_uint16_t(buf, 0, xpos);
	_mav_put_uint16_t(buf, 2, ypos);
	_mav_put_uint16_t(buf, 4, length);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 6);
#else
	mavlink_draw_vline_t packet;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 6);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_VLINE;
	return mavlink_finalize_message(msg, system_id, component_id, 6, 157);
}

/**
 * @brief Pack a draw_vline message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param xpos X position
 * @param ypos Y position
 * @param length line length
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_draw_vline_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t xpos,uint16_t ypos,uint16_t length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[6];
	_mav_put_uint16_t(buf, 0, xpos);
	_mav_put_uint16_t(buf, 2, ypos);
	_mav_put_uint16_t(buf, 4, length);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 6);
#else
	mavlink_draw_vline_t packet;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 6);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_VLINE;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 6, 157);
}

/**
 * @brief Encode a draw_vline struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param draw_vline C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_draw_vline_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_draw_vline_t* draw_vline)
{
	return mavlink_msg_draw_vline_pack(system_id, component_id, msg, draw_vline->xpos, draw_vline->ypos, draw_vline->length);
}

/**
 * @brief Send a draw_vline message
 * @param chan MAVLink channel to send the message
 *
 * @param xpos X position
 * @param ypos Y position
 * @param length line length
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_draw_vline_send(mavlink_channel_t chan, uint16_t xpos, uint16_t ypos, uint16_t length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[6];
	_mav_put_uint16_t(buf, 0, xpos);
	_mav_put_uint16_t(buf, 2, ypos);
	_mav_put_uint16_t(buf, 4, length);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_VLINE, buf, 6, 157);
#else
	mavlink_draw_vline_t packet;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_VLINE, (const char *)&packet, 6, 157);
#endif
}

#endif

// MESSAGE DRAW_VLINE UNPACKING


/**
 * @brief Get field xpos from draw_vline message
 *
 * @return X position
 */
static inline uint16_t mavlink_msg_draw_vline_get_xpos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field ypos from draw_vline message
 *
 * @return Y position
 */
static inline uint16_t mavlink_msg_draw_vline_get_ypos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field length from draw_vline message
 *
 * @return line length
 */
static inline uint16_t mavlink_msg_draw_vline_get_length(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Decode a draw_vline message into a struct
 *
 * @param msg The message to decode
 * @param draw_vline C-struct to decode the message contents into
 */
static inline void mavlink_msg_draw_vline_decode(const mavlink_message_t* msg, mavlink_draw_vline_t* draw_vline)
{
#if MAVLINK_NEED_BYTE_SWAP
	draw_vline->xpos = mavlink_msg_draw_vline_get_xpos(msg);
	draw_vline->ypos = mavlink_msg_draw_vline_get_ypos(msg);
	draw_vline->length = mavlink_msg_draw_vline_get_length(msg);
#else
	memcpy(draw_vline, _MAV_PAYLOAD(msg), 6);
#endif
}
