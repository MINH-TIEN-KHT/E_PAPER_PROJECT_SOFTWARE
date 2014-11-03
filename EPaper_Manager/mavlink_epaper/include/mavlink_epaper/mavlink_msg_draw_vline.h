// MESSAGE DRAW_VLINE PACKING

#define MAVLINK_MSG_ID_DRAW_VLINE 6

typedef struct __mavlink_draw_vline_t
{
 uint16_t masteraddress; ///< Master's address
 uint16_t slaveraddress; ///< Slaver's address
 uint16_t xpos; ///< X position
 uint16_t ypos; ///< Y position
 uint16_t length; ///< line length
} mavlink_draw_vline_t;

#define MAVLINK_MSG_ID_DRAW_VLINE_LEN 10
#define MAVLINK_MSG_ID_6_LEN 10



#define MAVLINK_MESSAGE_INFO_DRAW_VLINE { \
	"DRAW_VLINE", \
	5, \
	{  { "masteraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_draw_vline_t, masteraddress) }, \
         { "slaveraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_draw_vline_t, slaveraddress) }, \
         { "xpos", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_draw_vline_t, xpos) }, \
         { "ypos", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_draw_vline_t, ypos) }, \
         { "length", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_draw_vline_t, length) }, \
         } \
}


/**
 * @brief Pack a draw_vline message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position
 * @param ypos Y position
 * @param length line length
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_draw_vline_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t masteraddress, uint16_t slaveraddress, uint16_t xpos, uint16_t ypos, uint16_t length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[10];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint16_t(buf, 8, length);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 10);
#else
	mavlink_draw_vline_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 10);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_VLINE;
	return mavlink_finalize_message(msg, system_id, component_id, 10, 14);
}

/**
 * @brief Pack a draw_vline message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position
 * @param ypos Y position
 * @param length line length
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_draw_vline_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t masteraddress,uint16_t slaveraddress,uint16_t xpos,uint16_t ypos,uint16_t length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[10];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint16_t(buf, 8, length);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 10);
#else
	mavlink_draw_vline_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 10);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_VLINE;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 10, 14);
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
	return mavlink_msg_draw_vline_pack(system_id, component_id, msg, draw_vline->masteraddress, draw_vline->slaveraddress, draw_vline->xpos, draw_vline->ypos, draw_vline->length);
}

/**
 * @brief Send a draw_vline message
 * @param chan MAVLink channel to send the message
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position
 * @param ypos Y position
 * @param length line length
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_draw_vline_send(mavlink_channel_t chan, uint16_t masteraddress, uint16_t slaveraddress, uint16_t xpos, uint16_t ypos, uint16_t length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[10];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint16_t(buf, 8, length);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_VLINE, buf, 10, 14);
#else
	mavlink_draw_vline_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_VLINE, (const char *)&packet, 10, 14);
#endif
}

#endif

// MESSAGE DRAW_VLINE UNPACKING


/**
 * @brief Get field masteraddress from draw_vline message
 *
 * @return Master's address
 */
static inline uint16_t mavlink_msg_draw_vline_get_masteraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field slaveraddress from draw_vline message
 *
 * @return Slaver's address
 */
static inline uint16_t mavlink_msg_draw_vline_get_slaveraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field xpos from draw_vline message
 *
 * @return X position
 */
static inline uint16_t mavlink_msg_draw_vline_get_xpos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field ypos from draw_vline message
 *
 * @return Y position
 */
static inline uint16_t mavlink_msg_draw_vline_get_ypos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field length from draw_vline message
 *
 * @return line length
 */
static inline uint16_t mavlink_msg_draw_vline_get_length(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  8);
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
	draw_vline->masteraddress = mavlink_msg_draw_vline_get_masteraddress(msg);
	draw_vline->slaveraddress = mavlink_msg_draw_vline_get_slaveraddress(msg);
	draw_vline->xpos = mavlink_msg_draw_vline_get_xpos(msg);
	draw_vline->ypos = mavlink_msg_draw_vline_get_ypos(msg);
	draw_vline->length = mavlink_msg_draw_vline_get_length(msg);
#else
	memcpy(draw_vline, _MAV_PAYLOAD(msg), 10);
#endif
}
