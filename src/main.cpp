#include "Mouse.h"

void setup() {
  Mouse.begin();
}

void loop() {

  int xMove = random(-10, 11);
  int yMove = random(-10, 11);
  
  Mouse.move(xMove, yMove, 0);
  

  delay(random(100, 1001));
}
