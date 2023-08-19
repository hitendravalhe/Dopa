/*
  Dopa.h - Library for controlling LED matrix of Arduino UNO R4 Wifi.
  Created by H.S.VALHE(co-founder of Ecruxbot) on 19 Aug, 2023.
  Released into the public domain.


  Dopa Library - header file

  Demonstrates the use a 12x8 LED matrix on board display on arduino uno r4 wifi.  The Dopa
  library's frameworks work with all arduino uno r4 wifi compatible board.

  This sketch prints the alphabets to the on board display and
  uses the Dopa.begin() for Initialize the Dopa LED matrix library.
  and Dopa.loadFrame() to load the given argument into the led matrix


  Watch the latest programs and repositories on our github page
  link :- https://github.com/hitendravalhe/
*/

#ifndef Dopa_h
#define Dopa_h


#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix Dopa;
const uint32_t A[] = {
  0x400A011,
  0x2083F82,
  0x8208208
};

const uint32_t B[] = {
  0x1F010810,
  0x81F01081,
  0x81F0000
};

const uint32_t C[] = {
  0x1E021020,
  0x2002002,
  0x101E0000
};

const uint32_t D[] = {
  0x1F010810,
  0x81081081,
  0x81F0000
};

const uint32_t E[] = {
  0x3F020020,
  0x2003E02,
  0x2003F0
};

const uint32_t F1[] = {
  0x1E010010,
  0x1001E01,
  0x100100
};

const uint32_t G[] = {
  0x1F020820,
  0x2002702,
  0x201E0020
};

const uint32_t H[] = {
  0x21021021,
  0x2103F02,
  0x10210210
};

const uint32_t I[] = {
  0x3F804004,
  0x400400,
  0x400403F8
};

const uint32_t J[] = {
  0x1F004004,
  0x400402,
  0x402403C0
};

const uint32_t K[] = {
  0x10011012,
  0x1401801,
  0x40120110
};

const uint32_t L[] = {
  0x10010010,
  0x1001001,
  0x1001F0
};

const uint32_t M[] = {
  0x20430C29,
  0x42642042,
  0x4204204
};

const uint32_t N[] = {
  0x20430428,
  0x42442242,
  0x1420C204
};

const uint32_t O[] = {
  0x1E021040,
  0x84084084,
  0x82101E0
};

const uint32_t P[] = {
  0x1F010810,
  0x81081F01,
  0x100100
};

const uint32_t Q[] = {
  0x1F020820,
  0x82482282,
  0x181F8004
};

const uint32_t R[] = {
  0x3E021021,
  0x2103E02,
  0x80240220
};

const uint32_t S[] = {
  0x1E021020,
  0x2001E00,
  0x100103E0
};

const uint32_t T[] = {
  0x3F804004,
  0x400400,
  0x40040040
};

const uint32_t U[] = {
  0x21021021,
  0x2102102,
  0x101E0000
};

const uint32_t V[] = {
  0x20820820,
  0x82081100,
  0xA0040000
};

const uint32_t W[] = {
  0x40240246,
  0x24624622,
  0x64198000
};

const uint32_t X[] = {
  0x20811,
  0xA00400,
  0xA0110208
};

const uint32_t Y[] = {
  0x20820,
  0x81100A00,
  0x40080100
};

const uint32_t Z[] = {
  0x1F801,
  0x200400,
  0x801F8000
};

#endif
