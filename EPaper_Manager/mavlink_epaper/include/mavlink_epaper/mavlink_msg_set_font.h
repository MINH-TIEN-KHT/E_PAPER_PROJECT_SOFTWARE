// MESSAGE SET_FONT PACKING

#define MAVLINK_MSG_ID_SET_FONT 12

typedef struct __mavlink_set_font_t
{
 uint8_t font; ///< specifies the layer font to be used
} mavlink_set_font_t;

#define MAVLINK_MSG_ID_SET_FONT_LEN 1
#define MAVLINK_MSG_ID_12_LEN 1



#define MAVLINK_MESSAGE_INFO_SET_FONT { \
	"SET_FONT", \
	1, \
	{  { "font", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_font_t, font) }, \
         } \
}


/**
 * @brief Pack a set_font message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param font specifies the layer font to be used
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_font_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t font)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[1];
	_mav_put_uint8_t(buf, 0, font);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 1);
#else
	mavlink_set_font_t packet;
	packet.font = font;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 1);
#endif

	msg->msgid = MAVLINK_MSG_ID_SET_FONT;
	return mavlink_finalize_message(msg, system_id, component_id, 1, 45);
}

/**
 * @brief Pack a set_font message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param font specifies the layer font to be used
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_font_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t font)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[1];
	_mav_put_uint8_t(buf, 0, font);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 1);
#else
	mavlink_set_font_t packet;
	packet.font = font;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 1);
#endif

	msg->msgid = MAVLINK_MSG_ID_SET_FONT;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 1, 45);
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
	return mavlink_msg_set_font_pack(system_id, component_id, msg, set_font->font);
}

/**
 * @brief Send a set_font message
 * @param chan MAVLink channel to send the message
 *
 * @param font specifies the layer font to be used
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_font_send(mavlink_channel_t chan, uint8_t font)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[1];
	_mav_put_uint8_t(buf, 0, font);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_FONT, buf, 1, 45);
#else
	mavlink_set_font_t packet;
	packet.font = font;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_FONT, (const char *)&packet, 1, 45);
#endif
}

#endif

// MESSAGE SET_FONT UNPACKING


/**
 * @brief Get field font from set_font message
 *
 * @return specifies the layer font to be used
 */
static inline uint8_t mavlink_msg_set_font_get_font(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
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
	set_font->font = mavlink_msg_set_font_get_font(msg);
#else
	memcpy(set_font, _MAV_PAYLOAD(msg), 1);
#endif
}
