// MESSAGE DRAW_FILL_RECT PACKING

#define MAVLINK_MSG_ID_DRAW_FILL_RECT 8

typedef struct __mavlink_draw_fill_rect_t
{
 uint16_t masteraddress; ///< Master's address
 uint16_t slaveraddress; ///< Slaver's address
 uint16_t xpos; ///< X position
 uint16_t ypos; ///< Y position
 uint16_t height; ///< rectangle height
 uint16_t width; ///< rectangle width
} mavlink_draw_fill_rect_t;

#define MAVLINK_MSG_ID_DRAW_FILL_RECT_LEN 12
#define MAVLINK_MSG_ID_8_LEN 12



#define MAVLINK_MESSAGE_INFO_DRAW_FILL_RECT { \
	"DRAW_FILL_RECT", \
	6, \
	{  { "masteraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_draw_fill_rect_t, masteraddress) }, \
         { "slaveraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_draw_fill_rect_t, slaveraddress) }, \
         { "xpos", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_draw_fill_rect_t, xpos) }, \
         { "ypos", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_draw_fill_rect_t, ypos) }, \
         { "height", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_draw_fill_rect_t, height) }, \
         { "width", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_draw_fill_rect_t, width) }, \
         } \
}


/**
 * @brief Pack a draw_fill_rect message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position
 * @param ypos Y position
 * @param height rectangle height
 * @param width rectangle width
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_draw_fill_rect_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t masteraddress, uint16_t slaveraddress, uint16_t xpos, uint16_t ypos, uint16_t height, uint16_t width)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[12];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint16_t(buf, 8, height);
	_mav_put_uint16_t(buf, 10, width);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 12);
#else
	mavlink_draw_fill_rect_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.height = height;
	packet.width = width;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 12);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_FILL_RECT;
	return mavlink_finalize_message(msg, system_id, component_id, 12, 25);
}

/**
 * @brief Pack a draw_fill_rect message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position
 * @param ypos Y position
 * @param height rectangle height
 * @param width rectangle width
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_draw_fill_rect_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t masteraddress,uint16_t slaveraddress,uint16_t xpos,uint16_t ypos,uint16_t height,uint16_t width)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[12];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint16_t(buf, 8, height);
	_mav_put_uint16_t(buf, 10, width);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 12);
#else
	mavlink_draw_fill_rect_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.height = height;
	packet.width = width;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 12);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_FILL_RECT;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 12, 25);
}

/**
 * @brief Encode a draw_fill_rect struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param draw_fill_rect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_draw_fill_rect_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_draw_fill_rect_t* draw_fill_rect)
{
	return mavlink_msg_draw_fill_rect_pack(system_id, component_id, msg, draw_fill_rect->masteraddress, draw_fill_rect->slaveraddress, draw_fill_rect->xpos, draw_fill_rect->ypos, draw_fill_rect->height, draw_fill_rect->width);
}

/**
 * @brief Send a draw_fill_rect message
 * @param chan MAVLink channel to send the message
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position
 * @param ypos Y position
 * @param height rectangle height
 * @param width rectangle width
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_draw_fill_rect_send(mavlink_channel_t chan, uint16_t masteraddress, uint16_t slaveraddress, uint16_t xpos, uint16_t ypos, uint16_t height, uint16_t width)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[12];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint16_t(buf, 8, height);
	_mav_put_uint16_t(buf, 10, width);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_FILL_RECT, buf, 12, 25);
#else
	mavlink_draw_fill_rect_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.height = height;
	packet.width = width;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_FILL_RECT, (const char *)&packet, 12, 25);
#endif
}

#endif

// MESSAGE DRAW_FILL_RECT UNPACKING


/**
 * @brief Get field masteraddress from draw_fill_rect message
 *
 * @return Master's address
 */
static inline uint16_t mavlink_msg_draw_fill_rect_get_masteraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field slaveraddress from draw_fill_rect message
 *
 * @return Slaver's address
 */
static inline uint16_t mavlink_msg_draw_fill_rect_get_slaveraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field xpos from draw_fill_rect message
 *
 * @return X position
 */
static inline uint16_t mavlink_msg_draw_fill_rect_get_xpos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field ypos from draw_fill_rect message
 *
 * @return Y position
 */
static inline uint16_t mavlink_msg_draw_fill_rect_get_ypos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field height from draw_fill_rect message
 *
 * @return rectangle height
 */
static inline uint16_t mavlink_msg_draw_fill_rect_get_height(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field width from draw_fill_rect message
 *
 * @return rectangle width
 */
static inline uint16_t mavlink_msg_draw_fill_rect_get_width(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Decode a draw_fill_rect message into a struct
 *
 * @param msg The message to decode
 * @param draw_fill_rect C-struct to decode the message contents into
 */
static inline void mavlink_msg_draw_fill_rect_decode(const mavlink_message_t* msg, mavlink_draw_fill_rect_t* draw_fill_rect)
{
#if MAVLINK_NEED_BYTE_SWAP
	draw_fill_rect->masteraddress = mavlink_msg_draw_fill_rect_get_masteraddress(msg);
	draw_fill_rect->slaveraddress = mavlink_msg_draw_fill_rect_get_slaveraddress(msg);
	draw_fill_rect->xpos = mavlink_msg_draw_fill_rect_get_xpos(msg);
	draw_fill_rect->ypos = mavlink_msg_draw_fill_rect_get_ypos(msg);
	draw_fill_rect->height = mavlink_msg_draw_fill_rect_get_height(msg);
	draw_fill_rect->width = mavlink_msg_draw_fill_rect_get_width(msg);
#else
	memcpy(draw_fill_rect, _MAV_PAYLOAD(msg), 12);
#endif
}
