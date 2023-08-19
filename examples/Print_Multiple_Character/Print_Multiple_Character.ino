/*
  Dopa.h - Library for controlling LED matrix of Arduino UNO R4 Wifi.
  Created by H.S.VALHE(co-founder of Ecruxbot) on 19 Aug, 2023.
  Released into the public domain.


  Dopa Library - Printing multiple character in led matrix

  Demonstrates the use a 12x8 LED matrix on board display on arduino uno r4 wifi.  The Dopa
  library's frameworks work with all arduino uno r4 wifi compatible board.

  This sketch prints the alphabets to the on board display and
  uses the Dopa.begin() for Initialize the Dopa LED matrix library.
  and Dopa.loadFrame() to load the given argument into the led matrix

  Watch the latest programs and repositories on our github page
  link :- https://github.com/hitendravalhe/
*/

#include "Dopa.h"

void setup() {
  Serial.begin(9600);
  Dopa.begin();
}

void loop() {
  Dopa.loadFrame(A);
  delay(500);

  Dopa.loadFrame(B);
  delay(500);

  Dopa.loadFrame(C);
  delay(500);

  Dopa.loadFrame(D);
  delay(500);

  // Load and display other frames similarly
}
