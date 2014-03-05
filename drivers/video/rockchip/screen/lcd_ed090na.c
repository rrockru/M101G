
#ifndef __LCD_ED090NA__
#define __LCD_ED090NA__

#if  defined(CONFIG_RK610_LVDS) 
#include "../transmitter/rk610_lcd.h"
#endif

#define SCREEN_TYPE	    	SCREEN_LVDS
#define LVDS_FORMAT      	LVDS_8BIT_1
#define OUT_FACE	    	OUT_P888


#define DCLK	          	68000000
#define LCDC_ACLK         	300000000           //29 lcdc axi DMA ÆµÂÊ

/* Timing */
#define H_PW			10
#define H_BP			74
#define H_VD			1280
#define H_FP			74

#define V_PW			2
#define V_BP			10
#define V_VD			800
#define V_FP			25

#define LCD_WIDTH          	235
#define LCD_HEIGHT         	163
/* Other */
#define DCLK_POL	0
#define DEN_POL		0
#define VSYNC_POL	1
#define HSYNC_POL	1

#define SWAP_RB		0
#define SWAP_RG		0
#define SWAP_GB		0

#endif
