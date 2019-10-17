# SSD1283A_SPITFT for Arduino

This library supports SSD1283A to use with Adafruit_SPITFT

The code is extracted from LCDWIKI_SPI and adapted for single controller use and Adafruit_SPITFT.

### Version 1.0.0
- fixed rotation (rendering canvas ok for all 4 rotations)
- added template class GFXcanvas16T, uses dynamic memory space instead of heap space
#### Version 0.0.1
- preliminary version
- works with my "Transflective Display Module LCD Display DIY SPI Serial Port 130*130 Communicate for Arduino"
- https://www.aliexpress.com/item/4000116854157.html
- only tested with HW SPI.
