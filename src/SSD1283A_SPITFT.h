// created by Jean-Marc Zingg to be a standalone SSD1283A_SPITFT library (instead of the GxCTRL_SSD1283A class for the GxTFT library)
// code extracts taken from https://github.com/lcdwiki/LCDWIKI_SPI
// code extracts taken from https://github.com/adafruit/Adafruit-GFX-Library
//
// License: GNU GENERAL PUBLIC LICENSE V3, see LICENSE
//

#ifndef _SSD1283A_SPITFT_H_
#define _SSD1283A_SPITFT_H_

#include <Adafruit_SPITFT.h>

#include "GFXcanvas16T.h"

class SSD1283A_SPITFT : public Adafruit_SPITFT
{
  public:
    SSD1283A_SPITFT(int8_t cs_pin, int8_t dc_pin, int8_t rst_pin, int8_t bl_pin);
    SSD1283A_SPITFT(int8_t cs_pin, int8_t dc_pin, int8_t mosi_pin, int8_t sclk_pin, int8_t rst_pin, int8_t bl_pin = -1);
    SSD1283A_SPITFT(uint16_t width, uint16_t height, SPIClass *spi, int8_t cs_pin, int8_t dc_pin, int8_t rst_pin = -1, int8_t bl_pin = -1);
    SSD1283A_SPITFT(uint16_t width, uint16_t height, int8_t cs_pin, int8_t dc_pin, int8_t mosi_pin, int8_t sclk_pin, int8_t rst_pin = -1, int8_t bl_pin = -1);
    void begin(uint32_t freq);
    void init(uint32_t freq = 0);
    void setRotation(uint8_t r);
    void invertDisplay(boolean i);
    void invert(boolean i);
    void enableDisplay(boolean enable);
    void setAddrWindow(uint16_t x, uint16_t y, uint16_t w, uint16_t h);
  private:
    void _writeCommandData16(uint8_t cmd, uint16_t data);
    void _init_table16(const void *table, int16_t size);
  private:
    int8_t _bl_pin;
    uint16_t _inversion_bit;
};

#endif // _SSD1283A_SPITFT_H_
