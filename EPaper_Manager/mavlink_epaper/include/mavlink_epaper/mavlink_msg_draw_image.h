// MESSAGE DRAW_IMAGE PACKING

#define MAVLINK_MSG_ID_DRAW_IMAGE 9

typedef struct __mavlink_draw_image_t
{
 uint16_t masteraddress; ///< Master's address
 uint16_t slaveraddress; ///< Slaver's address
 uint16_t xpos; ///< X position in the EPD
 uint16_t ypos; ///< Y position in the EPD
 uint16_t xsize; ///< X size in the EPD
 uint16_t ysize; ///< Y size in the EPD
 uint8_t datalength; ///< image data length in package
 uint8_t data[240]; ///< image data
} mavlink_draw_image_t;

#define MAVLINK_MSG_ID_DRAW_IMAGE_LEN 253
#define MAVLINK_MSG_ID_9_LEN 253

#define MAVLINK_MSG_DRAW_IMAGE_FIELD_DATA_LEN 240

#define MAVLINK_MESSAGE_INFO_DRAW_IMAGE { \
	"DRAW_IMAGE", \
	8, \
	{  { "masteraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_draw_image_t, masteraddress) }, \
         { "slaveraddress", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_draw_image_t, slaveraddress) }, \
         { "xpos", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_draw_image_t, xpos) }, \
         { "ypos", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_draw_image_t, ypos) }, \
         { "xsize", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_draw_image_t, xsize) }, \
         { "ysize", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_draw_image_t, ysize) }, \
         { "datalength", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_draw_image_t, datalength) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 240, 13, offsetof(mavlink_draw_image_t, data) }, \
         } \
}


/**
 * @brief Pack a draw_image message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position in the EPD
 * @param ypos Y position in the EPD
 * @param xsize X size in the EPD
 * @param ysize Y size in the EPD
 * @param datalength image data length in package
 * @param data image data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_draw_image_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t masteraddress, uint16_t slaveraddress, uint16_t xpos, uint16_t ypos, uint16_t xsize, uint16_t ysize, uint8_t datalength, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[253];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint16_t(buf, 8, xsize);
	_mav_put_uint16_t(buf, 10, ysize);
	_mav_put_uint8_t(buf, 12, datalength);
	_mav_put_uint8_t_array(buf, 13, data, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 253);
#else
	mavlink_draw_image_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.xsize = xsize;
	packet.ysize = ysize;
	packet.datalength = datalength;
	mav_array_memcpy(packet.data, data, sizeof(uint8_t)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 253);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_IMAGE;
	return mavlink_finalize_message(msg, system_id, component_id, 253, 79);
}

/**
 * @brief Pack a draw_image message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position in the EPD
 * @param ypos Y position in the EPD
 * @param xsize X size in the EPD
 * @param ysize Y size in the EPD
 * @param datalength image data length in package
 * @param data image data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_draw_image_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t masteraddress,uint16_t slaveraddress,uint16_t xpos,uint16_t ypos,uint16_t xsize,uint16_t ysize,uint8_t datalength,const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[253];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint16_t(buf, 8, xsize);
	_mav_put_uint16_t(buf, 10, ysize);
	_mav_put_uint8_t(buf, 12, datalength);
	_mav_put_uint8_t_array(buf, 13, data, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 253);
#else
	mavlink_draw_image_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.xsize = xsize;
	packet.ysize = ysize;
	packet.datalength = datalength;
	mav_array_memcpy(packet.data, data, sizeof(uint8_t)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 253);
#endif

	msg->msgid = MAVLINK_MSG_ID_DRAW_IMAGE;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 253, 79);
}

/**
 * @brief Encode a draw_image struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param draw_image C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_draw_image_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_draw_image_t* draw_image)
{
	return mavlink_msg_draw_image_pack(system_id, component_id, msg, draw_image->masteraddress, draw_image->slaveraddress, draw_image->xpos, draw_image->ypos, draw_image->xsize, draw_image->ysize, draw_image->datalength, draw_image->data);
}

/**
 * @brief Send a draw_image message
 * @param chan MAVLink channel to send the message
 *
 * @param masteraddress Master's address
 * @param slaveraddress Slaver's address
 * @param xpos X position in the EPD
 * @param ypos Y position in the EPD
 * @param xsize X size in the EPD
 * @param ysize Y size in the EPD
 * @param datalength image data length in package
 * @param data image data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_draw_image_send(mavlink_channel_t chan, uint16_t masteraddress, uint16_t slaveraddress, uint16_t xpos, uint16_t ypos, uint16_t xsize, uint16_t ysize, uint8_t datalength, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[253];
	_mav_put_uint16_t(buf, 0, masteraddress);
	_mav_put_uint16_t(buf, 2, slaveraddress);
	_mav_put_uint16_t(buf, 4, xpos);
	_mav_put_uint16_t(buf, 6, ypos);
	_mav_put_uint16_t(buf, 8, xsize);
	_mav_put_uint16_t(buf, 10, ysize);
	_mav_put_uint8_t(buf, 12, datalength);
	_mav_put_uint8_t_array(buf, 13, data, 240);
	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_IMAGE, buf, 253, 79);
#else
	mavlink_draw_image_t packet;
	packet.masteraddress = masteraddress;
	packet.slaveraddress = slaveraddress;
	packet.xpos = xpos;
	packet.ypos = ypos;
	packet.xsize = xsize;
	packet.ysize = ysize;
	packet.datalength = datalength;
	mav_array_memcpy(packet.data, data, sizeof(uint8_t)*240);
	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DRAW_IMAGE, (const char *)&packet, 253, 79);
#endif
}

#endif

// MESSAGE DRAW_IMAGE UNPACKING


/**
 * @brief Get field masteraddress from draw_image message
 *
 * @return Master's address
 */
static inline uint16_t mavlink_msg_draw_image_get_masteraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field slaveraddress from draw_image message
 *
 * @return Slaver's address
 */
static inline uint16_t mavlink_msg_draw_image_get_slaveraddress(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field xpos from draw_image message
 *
 * @return X position in the EPD
 */
static inline uint16_t mavlink_msg_draw_image_get_xpos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field ypos from draw_image message
 *
 * @return Y position in the EPD
 */
static inline uint16_t mavlink_msg_draw_image_get_ypos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field xsize from draw_image message
 *
 * @return X size in the EPD
 */
static inline uint16_t mavlink_msg_draw_image_get_xsize(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field ysize from draw_image message
 *
 * @return Y size in the EPD
 */
static inline uint16_t mavlink_msg_draw_image_get_ysize(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field datalength from draw_image message
 *
 * @return image data length in package
 */
static inline uint8_t mavlink_msg_draw_image_get_datalength(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field data from draw_image message
 *
 * @return image data
 */
static inline uint16_t mavlink_msg_draw_image_get_data(const mavlink_message_t* msg, uint8_t *data)
{
	return _MAV_RETURN_uint8_t_array(msg, data, 240,  13);
}

/**
 * @brief Decode a draw_image message into a struct
 *
 * @param msg The message to decode
 * @param draw_image C-struct to decode the message contents into
 */
static inline void mavlink_msg_draw_image_decode(const mavlink_message_t* msg, mavlink_draw_image_t* draw_image)
{
#if MAVLINK_NEED_BYTE_SWAP
	draw_image->masteraddress = mavlink_msg_draw_image_get_masteraddress(msg);
	draw_image->slaveraddress = mavlink_msg_draw_image_get_slaveraddress(msg);
	draw_image->xpos = mavlink_msg_draw_image_get_xpos(msg);
	draw_image->ypos = mavlink_msg_draw_image_get_ypos(msg);
	draw_image->xsize = mavlink_msg_draw_image_get_xsize(msg);
	draw_image->ysize = mavlink_msg_draw_image_get_ysize(msg);
	draw_image->datalength = mavlink_msg_draw_image_get_datalength(msg);
	mavlink_msg_draw_image_get_data(msg, draw_image->data);
#else
	memcpy(draw_image, _MAV_PAYLOAD(msg), 253);
#endif
}
