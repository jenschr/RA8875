RA8875 library b11p1 [gold release]
==============================

**Wiki added!** https://github.com/sumotoy/RA8875/wiki<br>
Moved a lot of 'bla bla' in the wiki, readme cleaned.

##### Current version 0.70b11, it's the first preview of the 0.70b11! Please read!!!.<br>
**0.70b11**<br>
Finally the new optimized font rendering engine it's ready! More than 20 times faster!!!<br>
Rendered strings now follow wrap command or the extra char will not rendered (wrap off)<br>
New font scheme, it uses only one file and can be loaded in tiny CPU (UNO, etc.)<br>
User Font Conversion utility support (read wiki), now user can easily create custom fonts! (only win, sorry)<br>
Initial support for many other CPU's like ESP<br>
Various optimizations<br>
Changed licence from CC to GNU v3<br>

Current beta **tested only with**:
* EastRising RA8875 5"Inch (480x272) with resistive Touch or FT chip capacitive<br>
* EastRising RA8875 7"Inch (800x480) with FT chip capacitive<br>
* EastRising RA8875 5"Inch (800x480) with resistive Touch<br>
 All tested with Teensy 3.0, Teensy 3.1, Teensy LC, Arduino DUE, Arduino UNO, Arduino MEGA<br>
Check 'Proof of working' in wiki.<br>

##### Not Working? <br>
I have tested 0.70b11 with several CPU and <b>worked</b>:<br>
 - Teensy 3.1
 - Teensy 3.0
 - Teensy LC
 - Arduino UNO
 - Arduino NANO
 - Arduino DUE
 - Arduino MEGA
 - Arduino YUN
 Display tested:
 - EastRising RA8875 5" (480x272)
 - EastRising RA8875 5" (800x480)
 - EastRising RA8875 7" (800x480)
 - Adafruit (480x272) 
 - Adafruit (800x480)<br>
 If your display not works, please check your connections, supply values, etc.<br>
 Remember it's an SPI connection so there's hardware limitations on some CPU, for example DUE can use as CS pin 4,10   or 52, Teensy can use more but not all, 8 Bit arduino can use almost any, etc..<br>
 Still not working? Check my wiki, **check carefully!**<br>
 When testing, do not connect other devices on the same SPI line! This chip uses SPI mode 3 that it's not compatible
 with most stuff (check my wiki).<br>
 Are you sure you connect everything fine, settings are ok, you are using the correct CS pin, you don't have any other  SPI devices sharing the same line, the display has correct jumper set and you are sure that display it's correct supplied (and the supply it's stable, check also this!) but you still have nothing on screen?<br>
  Ok, in that case you may ask help but you need to double check that you do not make mistakes!<br>Please understand that   I cannot spend time to fix something that it's not a library fault!!!


##### Teensy notes:
I love Teensy 3 MCU's, so every library has special features for this micro. You need to read my notes about wiring first. Some examples works only for Teensy 3.<br>

##### Description
A Fast and Optimized library for RAiO RA8875 display driver for Teensy 3.x, Teensy LC and Arduino's (and I hope for other MCU's).<br>
This is the first attemp to create a library that use all the features of this chip _from scratch_ and have nothing to share with the Adafruit_RA8875 library.<br>
As always I provide a lot of examples (check video), more coming soon...<br>

This library will work also with the Adafruit board but was mainly coded for the many TFT displays from china makers that use this chip, some are quite good and cheap, like the EastRising from buydisplay.com, much cheaper than adafruit.<br>I'm not related to EastRising or BuyDisplay, in any way, but I appreciate that I don't have to spend a little fortune for DIY stuff.<br>


####  The goals...
  - All features supported
  - 8 bit and 16 bit color depth support (done)
  - Layer support (now support large screen but only at 256 colors) (done)
  - Scalable complexity, start with basics but you can go trough... (done)
  - Support for the many external ROM Font chip (done)
  - Support for the external SPI FLASH (on develop)
  - Working with Teensy 3.x, Teensy LC, Arduino's, Energia IDE supported MCU's (stellaris, etc.)
  - Correct use of Print, Write and Println (done)
  - Correct use of setCursor to mimic LiquidCrystal library (done)
  - Compatibility with alternative SPI pinouts on Teensy 3.x,Teensy LC, this will let you use it with Audio board! (done)
  - Can use capacitive and resistive touch screen, the capacitive with gesture and max 5 concurrent touches. (done)
  - Full rotation support. (done)
  - External copyright free fonts support plus large font rendering. (done)
  - Support for Keypad Matrix. (still working on)
  - Internal support for IRQ's (done for Touch, still develop for other stuff)
  - Use of BTE (almost done)
  - A lot of examples. (done)


#### Wiring with your MCU
I support only _native SPI_.<br>
**MOSI,MISO,SCK** pins can be different between MCU's (UNO and Teensy3 uses 11,12,13) but DUE and other are different so check!)<br>
For **RST** it's your choice, it's really possible use _any_ pin. Apparently only Adafruit board need this, the 2 chinese boards I have here have internal reset circuit so it's optional, but I suggest to use it.<br>
For **CS** pin you have to choose between these pin on **Teensy3.1: 2,6,9,10,15,20,21,22,23**. Arduino UNO,MEGA and almost all 8 bit variants can use any pin, DUE can use as CS only 4,10 or 52 (please check DUE specifications)<br>
You also need another pin for **INT** used by Touch Screen (I used pin 2)<br>
From version 0.6, Energia IDE will be supported so many MCU's can be used but should wait 0.6 and since I have only Stellaris LM4F120XL I cannot be sure of the various MCU's wiring so drop me a note, at list I can add to the documentation!

#### Compatible with PJRC Audio Board! (teensy3.1 only)
Current beta has a optional Teensy instance that can use alternative SPI pinouts, this let you use Audio Board from PJRC that uses the classic SPI pinouts for RX and SD cs. You can test it with Spectrum Analyzer example that uses the Audio Board with a RA8875 TFT screen and thanks to the hardware accelleration of this chip and the use of onchip screen buffer it let you have large screen with touch capabilities with high-end audio manipulation.
see wiky:<br>
https://github.com/sumotoy/RA8875/wiki/Teensy-3.1---Working-with-PJRC-Audio-Board-with-SD-card-and-RA8875
