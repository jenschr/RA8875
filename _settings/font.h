#ifndef _ST7735_FONTS_H
	#define _ST7735_FONTS_H

	#if defined(SPARK)
		#include <application.h>
	  #define __PRGMTAG_
	#endif

	typedef struct __PRGMTAG_ {
			const uint8_t 	*data;
			uint8_t 		image_width;
			int				image_datalen;
	} tImage;

	typedef struct {
			uint8_t 		char_code;
			const tImage 	*image;
	} tChar;

	typedef struct {
			uint8_t 		length;
			const tChar 	*chars;
			uint8_t			font_width;
			uint8_t			font_height;
			bool 			rle;
	} tFont;

#endif
