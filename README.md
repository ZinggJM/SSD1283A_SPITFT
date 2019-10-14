# SSD1283A_SPITFT for Arduino

This library supports SSD1283A to use with Adafruit_SPITFT

The code is extracted from LCDWIKI_SPI and adapted for single controller use and Adafruit_SPITFT.

### General Remark

The SSD1283A controller seems to have an issue with data entry modes.
Only Mode 3 seems to work correctly, with both AM directions.

Graphics drawing works with all 4 rotation directions, using Adafruit_SPITFT.
Bitmaps drawing, e.g. for canvas, using pushColors, works only correctly for rotation 0 and 3.
Bitmaps drawing, e.g. for canvas, using Adafruit_SPITFT::drawRGBBitmap also works only correctly for rotation 0 and 3.
(The leftmost column is missing, but show as rightmost column).
Use rotation for drawing to the canvas, but use rotation 0 or 3 for pushing the canvas to screen.

### Version 0.0.1
- preliminary version
- works with my "Transflective Display Module LCD Display DIY SPI Serial Port 130*130 Communicate for Arduino"
- https://www.aliexpress.com/item/4000116854157.html
- only tested with HW SPI.
