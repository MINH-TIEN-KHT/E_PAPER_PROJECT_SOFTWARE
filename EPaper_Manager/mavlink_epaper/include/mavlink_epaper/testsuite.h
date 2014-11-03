/** @file
 *	@brief MAVLink comm protocol testsuite generated from mavlink_epaper.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef MAVLINK_EPAPER_TESTSUITE_H
#define MAVLINK_EPAPER_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_mavlink_epaper(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_mavlink_epaper(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_display_string(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_display_string_t packet_in = {
		17235,
	17339,
	17443,
	17547,
	29,
	96,
	163,
	"LMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOP",
	};
	mavlink_display_string_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.masteraddress = packet_in.masteraddress;
        	packet1.slaveraddress = packet_in.slaveraddress;
        	packet1.xpos = packet_in.xpos;
        	packet1.ypos = packet_in.ypos;
        	packet1.font = packet_in.font;
        	packet1.mode = packet_in.mode;
        	packet1.datalength = packet_in.datalength;
        
        	mav_array_memcpy(packet1.text, packet_in.text, sizeof(char)*240);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_display_string_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_display_string_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_display_string_pack(system_id, component_id, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.font , packet1.mode , packet1.datalength , packet1.text );
	mavlink_msg_display_string_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_display_string_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.font , packet1.mode , packet1.datalength , packet1.text );
	mavlink_msg_display_string_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_display_string_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_display_string_send(MAVLINK_COMM_1 , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.font , packet1.mode , packet1.datalength , packet1.text );
	mavlink_msg_display_string_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_draw_hline(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_draw_hline_t packet_in = {
		17235,
	17339,
	17443,
	17547,
	17651,
	};
	mavlink_draw_hline_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.masteraddress = packet_in.masteraddress;
        	packet1.slaveraddress = packet_in.slaveraddress;
        	packet1.xpos = packet_in.xpos;
        	packet1.ypos = packet_in.ypos;
        	packet1.length = packet_in.length;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_hline_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_draw_hline_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_hline_pack(system_id, component_id, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.length );
	mavlink_msg_draw_hline_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_hline_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.length );
	mavlink_msg_draw_hline_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_draw_hline_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_hline_send(MAVLINK_COMM_1 , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.length );
	mavlink_msg_draw_hline_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_draw_vline(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_draw_vline_t packet_in = {
		17235,
	17339,
	17443,
	17547,
	17651,
	};
	mavlink_draw_vline_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.masteraddress = packet_in.masteraddress;
        	packet1.slaveraddress = packet_in.slaveraddress;
        	packet1.xpos = packet_in.xpos;
        	packet1.ypos = packet_in.ypos;
        	packet1.length = packet_in.length;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_vline_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_draw_vline_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_vline_pack(system_id, component_id, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.length );
	mavlink_msg_draw_vline_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_vline_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.length );
	mavlink_msg_draw_vline_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_draw_vline_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_vline_send(MAVLINK_COMM_1 , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.length );
	mavlink_msg_draw_vline_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_draw_rect(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_draw_rect_t packet_in = {
		17235,
	17339,
	17443,
	17547,
	17651,
	17755,
	};
	mavlink_draw_rect_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.masteraddress = packet_in.masteraddress;
        	packet1.slaveraddress = packet_in.slaveraddress;
        	packet1.xpos = packet_in.xpos;
        	packet1.ypos = packet_in.ypos;
        	packet1.height = packet_in.height;
        	packet1.width = packet_in.width;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_rect_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_draw_rect_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_rect_pack(system_id, component_id, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.height , packet1.width );
	mavlink_msg_draw_rect_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_rect_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.height , packet1.width );
	mavlink_msg_draw_rect_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_draw_rect_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_rect_send(MAVLINK_COMM_1 , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.height , packet1.width );
	mavlink_msg_draw_rect_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_draw_fill_rect(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_draw_fill_rect_t packet_in = {
		17235,
	17339,
	17443,
	17547,
	17651,
	17755,
	};
	mavlink_draw_fill_rect_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.masteraddress = packet_in.masteraddress;
        	packet1.slaveraddress = packet_in.slaveraddress;
        	packet1.xpos = packet_in.xpos;
        	packet1.ypos = packet_in.ypos;
        	packet1.height = packet_in.height;
        	packet1.width = packet_in.width;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_fill_rect_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_draw_fill_rect_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_fill_rect_pack(system_id, component_id, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.height , packet1.width );
	mavlink_msg_draw_fill_rect_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_fill_rect_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.height , packet1.width );
	mavlink_msg_draw_fill_rect_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_draw_fill_rect_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_fill_rect_send(MAVLINK_COMM_1 , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.height , packet1.width );
	mavlink_msg_draw_fill_rect_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_draw_image(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_draw_image_t packet_in = {
		17235,
	17339,
	17443,
	17547,
	17651,
	17755,
	41,
	{ 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91 },
	};
	mavlink_draw_image_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.masteraddress = packet_in.masteraddress;
        	packet1.slaveraddress = packet_in.slaveraddress;
        	packet1.xpos = packet_in.xpos;
        	packet1.ypos = packet_in.ypos;
        	packet1.xsize = packet_in.xsize;
        	packet1.ysize = packet_in.ysize;
        	packet1.datalength = packet_in.datalength;
        
        	mav_array_memcpy(packet1.data, packet_in.data, sizeof(uint8_t)*240);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_image_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_draw_image_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_image_pack(system_id, component_id, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.xsize , packet1.ysize , packet1.datalength , packet1.data );
	mavlink_msg_draw_image_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_image_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.xsize , packet1.ysize , packet1.datalength , packet1.data );
	mavlink_msg_draw_image_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_draw_image_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_draw_image_send(MAVLINK_COMM_1 , packet1.masteraddress , packet1.slaveraddress , packet1.xpos , packet1.ypos , packet1.xsize , packet1.ysize , packet1.datalength , packet1.data );
	mavlink_msg_draw_image_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_refresh_display(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_refresh_display_t packet_in = {
		17235,
	17339,
	};
	mavlink_refresh_display_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.masteraddress = packet_in.masteraddress;
        	packet1.slaveraddress = packet_in.slaveraddress;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_refresh_display_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_refresh_display_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_refresh_display_pack(system_id, component_id, &msg , packet1.masteraddress , packet1.slaveraddress );
	mavlink_msg_refresh_display_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_refresh_display_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.masteraddress , packet1.slaveraddress );
	mavlink_msg_refresh_display_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_refresh_display_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_refresh_display_send(MAVLINK_COMM_1 , packet1.masteraddress , packet1.slaveraddress );
	mavlink_msg_refresh_display_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_clear_display(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_clear_display_t packet_in = {
		17235,
	17339,
	17443,
	};
	mavlink_clear_display_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.masteraddress = packet_in.masteraddress;
        	packet1.slaveraddress = packet_in.slaveraddress;
        	packet1.color = packet_in.color;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_clear_display_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_clear_display_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_clear_display_pack(system_id, component_id, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.color );
	mavlink_msg_clear_display_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_clear_display_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.color );
	mavlink_msg_clear_display_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_clear_display_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_clear_display_send(MAVLINK_COMM_1 , packet1.masteraddress , packet1.slaveraddress , packet1.color );
	mavlink_msg_clear_display_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_font(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_set_font_t packet_in = {
		17235,
	17339,
	17,
	};
	mavlink_set_font_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.masteraddress = packet_in.masteraddress;
        	packet1.slaveraddress = packet_in.slaveraddress;
        	packet1.font = packet_in.font;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_set_font_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_set_font_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_set_font_pack(system_id, component_id, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.font );
	mavlink_msg_set_font_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_set_font_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.masteraddress , packet1.slaveraddress , packet1.font );
	mavlink_msg_set_font_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_set_font_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_set_font_send(MAVLINK_COMM_1 , packet1.masteraddress , packet1.slaveraddress , packet1.font );
	mavlink_msg_set_font_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mavlink_epaper(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_display_string(system_id, component_id, last_msg);
	mavlink_test_draw_hline(system_id, component_id, last_msg);
	mavlink_test_draw_vline(system_id, component_id, last_msg);
	mavlink_test_draw_rect(system_id, component_id, last_msg);
	mavlink_test_draw_fill_rect(system_id, component_id, last_msg);
	mavlink_test_draw_image(system_id, component_id, last_msg);
	mavlink_test_refresh_display(system_id, component_id, last_msg);
	mavlink_test_clear_display(system_id, component_id, last_msg);
	mavlink_test_set_font(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_EPAPER_TESTSUITE_H
