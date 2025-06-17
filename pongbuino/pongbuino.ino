#include <Gamebuino-Meta.h>

int xPosition = 32;
int yPosition = 32;
int xSpeed = 1;
int ySpeed = 1;
int ballWidth = 4;
int ballHeight = 4;

void setup() {
  gb.begin();
}


void loop() {
  while (!gb.update()) {
    gb.display.clear();
  }

  if (xPosition >= gb.display.width() - ballWidth || xPosition <= 0) {
    xSpeed = -xSpeed;
  }

  if (yPosition >= gb.display.height() - ballHeight || yPosition <= 0) {
    ySpeed = -ySpeed;
  }

  xPosition = xPosition + xSpeed;
  yPosition = yPosition + ySpeed;

  gb.display.fillRect(xPosition, yPosition, ballHeight, ballWidth);
}