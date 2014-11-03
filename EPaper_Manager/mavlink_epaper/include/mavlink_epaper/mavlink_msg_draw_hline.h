// MESSAGE DRAW_HLINE PACKING

#define MAVLINK_MSG_ID_DRAW_HLINE 5

typedef struct __mavlink_draw_hline_t
{
 uint16_t masteraddress; ///< Master's address
 uint16_t slaveraddress; ///< Slaver's address
 uint16_t xpos; ///< X position
 uint16_t ypos; ///< Y position
 uint16_t length; ///< line length
} mavlink_draw_hline_t;

#define MAVLINK_MSG_ID_DRAW_HLINE_LEN 10
#define MAVLINK_MSG_ID_5_LEN 10



#define MAVLINK_MESSAGE_INFO_DRAW_HLINE { \
	"DRAW_HLINE", \
	5, \
	{  { "masteraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_draw_hline_t, masteraddress) }, \
         { "slaveraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_draw_hline_t, slaveraddress) }, \
         { "xpos", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_draw_hline_t, xpos) }, \
         { "ypos", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_draw_hline_t, ypos) }, \
         { "length", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_draw_hline_t, length) }, \
         } \
}


/**
 * @brief Pack a draw_hline message
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
static inline uint16_t mavlink_msg_draw_hline_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
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
	mavlink_draw_hline_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 10);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_HLINE;
	return mavlink_finalize_message(msg, system_id, component_id, 10, 253);
}

/**
 * @brief Pack a draw_hline message on a channel
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
static inline uint16_t mavlink_msg_draw_hline_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
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
	mavlink_draw_hline_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 10);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_HLINE;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 10, 253);
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
	return mavlink_msg_draw_hline_pack(system_id, component_id, msg, draw_hline->masteraddress, draw_hline->slaveraddress, draw_hline->xpos, draw_hline->ypos, draw_hline->length);
}

/**
 * @brief Send a draw_hline message
 * @param chan MAVLink channel to send the message
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position
 * @param ypos Y position
 * @param length line length
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_draw_hline_send(mavlink_channel_t chan, uint16_t masteraddress, uint16_t slaveraddress, uint16_t xpos, uint16_t ypos, uint16_t length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[10];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint16_t(buf, 8, length);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_HLINE, buf, 10, 253);
#else
	mavlink_draw_hline_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.length = length;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_HLINE, (const char *)&packet, 10, 253);
#endif
}

#endif

// MESSAGE DRAW_HLINE UNPACKING


/**
 * @brief Get field masteraddress from draw_hline message
 *
 * @return Master's address
 */
static inline uint16_t mavlink_msg_draw_hline_get_masteraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field slaveraddress from draw_hline message
 *
 * @return Slaver's address
 */
static inline uint16_t mavlink_msg_draw_hline_get_slaveraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field xpos from draw_hline message
 *
 * @return X position
 */
static inline uint16_t mavlink_msg_draw_hline_get_xpos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field ypos from draw_hline message
 *
 * @return Y position
 */
static inline uint16_t mavlink_msg_draw_hline_get_ypos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field length from draw_hline message
 *
 * @return line length
 */
static inline uint16_t mavlink_msg_draw_hline_get_length(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  8);
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
	draw_hline->masteraddress = mavlink_msg_draw_hline_get_masteraddress(msg);
	draw_hline->slaveraddress = mavlink_msg_draw_hline_get_slaveraddress(msg);
	draw_hline->xpos = mavlink_msg_draw_hline_get_xpos(msg);
	draw_hline->ypos = mavlink_msg_draw_hline_get_ypos(msg);
	draw_hline->length = mavlink_msg_draw_hline_get_length(msg);
#else
	memcpy(draw_hline, _MAV_PAYLOAD(msg), 10);
#endif
}
