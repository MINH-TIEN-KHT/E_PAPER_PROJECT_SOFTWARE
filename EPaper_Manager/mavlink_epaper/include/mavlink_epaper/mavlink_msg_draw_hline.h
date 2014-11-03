// MESSAGE DRAW_HLINE PACKING

#define MAVLINK_MSG_ID_DRAW_HLINE 5

typedef struct __mavlink_draw_hline_t
{
 uint16_t xpos; ///< X position
 uint16_t ypos; ///< Y position
 uint16_t length; ///< line length
} mavlink_draw_hline_t;

#define MAVLINK_MSG_ID_DRAW_HLINE_LEN 6
#define MAVLINK_MSG_ID_5_LEN 6



#define MAVLINK_MESSAGE_INFO_DRAW_HLINE { \
	"DRAW_HLINE", \
	3, \
	{  { "xpos", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_draw_hline_t, xpos) }, \
         { "ypos", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_draw_hline_t, ypos) }, \
         { "length", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_draw_hline_t, length) }, \
         } \
}


/**
 * @brief Pack a draw_hline message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param xpos X position
 * @param ypos Y position
 * @param length line length
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_draw_hline_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t xpos, uint16_t ypos, uint16_t length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[6];
	_mav_put_uint16_t(buf, 0, xpos);
	_mav_put_uint16_t(buf, 2, ypos);
	_mav_put_uint16_t(buf, 4, length);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 6);
#else
	mavlink_draw_hline_t packet;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 6);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_HLINE;
	return mavlink_finalize_message(msg, system_id, component_id, 6, 155);
}

/**
 * @brief Pack a draw_hline message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param xpos X position
 * @param ypos Y position
 * @param length line length
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_draw_hline_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
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
	mavlink_draw_hline_t packet;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 6);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_HLINE;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 6, 155);
}

/**
 * @brief Encode a draw_hline struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param draw_hline C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_draw_hline_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_draw_hline_t* draw_hline)
{
	return mavlink_msg_draw_hline_pack(system_id, component_id, msg, draw_hline->xpos, draw_hline->ypos, draw_hline->length);
}

/**
 * @brief Send a draw_hline message
 * @param chan MAVLink channel to send the message
 *
 * @param xpos X position
 * @param ypos Y position
 * @param length line length
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_draw_hline_send(mavlink_channel_t chan, uint16_t xpos, uint16_t ypos, uint16_t length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[6];
	_mav_put_uint16_t(buf, 0, xpos);
	_mav_put_uint16_t(buf, 2, ypos);
	_mav_put_uint16_t(buf, 4, length);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_HLINE, buf, 6, 155);
#else
	mavlink_draw_hline_t packet;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_HLINE, (const char *)&packet, 6, 155);
#endif
}

#endif

// MESSAGE DRAW_HLINE UNPACKING


/**
 * @brief Get field xpos from draw_hline message
 *
 * @return X position
 */
static inline uint16_t mavlink_msg_draw_hline_get_xpos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field ypos from draw_hline message
 *
 * @return Y position
 */
static inline uint16_t mavlink_msg_draw_hline_get_ypos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field length from draw_hline message
 *
 * @return line length
 */
static inline uint16_t mavlink_msg_draw_hline_get_length(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Decode a draw_hline message into a struct
 *
 * @param msg The message to decode
 * @param draw_hline C-struct to decode the message contents into
 */
static inline void mavlink_msg_draw_hline_decode(const mavlink_message_t* msg, mavlink_draw_hline_t* draw_hline)
{
#if MAVLINK_NEED_BYTE_SWAP
	draw_hline->xpos = mavlink_msg_draw_hline_get_xpos(msg);
	draw_hline->ypos = mavlink_msg_draw_hline_get_ypos(msg);
	draw_hline->length = mavlink_msg_draw_hline_get_length(msg);
#else
	memcpy(draw_hline, _MAV_PAYLOAD(msg), 6);
#endif
}
