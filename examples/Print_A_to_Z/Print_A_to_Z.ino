/*
  Dopa.h - Library for controlling LED matrix of Arduino UNO R4 Wifi.
  Created by H.S.VALHE(co-founder of Ecruxbot) on 19 Aug, 2023.
  Released into the public domain.


  Dopa Library - Printing A to Z

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

  Dopa.loadFrame(E);
  delay(500);

  Dopa.loadFrame(F1);
  delay(500);

  Dopa.loadFrame(G);
  delay(500);

  Dopa.loadFrame(H);
  delay(500);

  Dopa.loadFrame(I);
  delay(500);

  Dopa.loadFrame(J);
  delay(500);

  Dopa.loadFrame(K);
  delay(500);

  Dopa.loadFrame(L);
  delay(500);

  Dopa.loadFrame(M);
  delay(500);

  Dopa.loadFrame(N);
  delay(500);

  Dopa.loadFrame(O);
  delay(500);

  Dopa.loadFrame(P);
  delay(500);

  Dopa.loadFrame(Q);
  delay(500);

  Dopa.loadFrame(R);
  delay(500);

  Dopa.loadFrame(S);
  delay(500);

  Dopa.loadFrame(T);
  delay(500);

  Dopa.loadFrame(U);
  delay(500);

  Dopa.loadFrame(V);
  delay(500);

  Dopa.loadFrame(W);
  delay(500);

  Dopa.loadFrame(X);
  delay(500);

  Dopa.loadFrame(Y);
  delay(500);

  Dopa.loadFrame(Z);
  delay(500);
}
