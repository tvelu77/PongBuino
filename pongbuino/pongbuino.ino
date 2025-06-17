#include <Gamebuino-Meta.h>
#include "Ball.h"

Ball ball = Ball(4, 4);

void setup() {
  gb.begin();
}


void loop() {
  while (!gb.update()) {
    gb.display.clear();
  }

  if (ball.getXPosition() >= gb.display.width() - ball.getWidth() || ball.getXPosition() <= 0) {
    ball.xBounce();
  }

  if (ball.getYPosition() >= gb.display.height() - ball.getHeight() || ball.getYPosition() <= 0) {
    ball.yBounce();
  }

  ball.updateXPosition();
  ball.updateYPosition();

  gb.display.fillRect(ball.getXPosition(), ball.getYPosition(), ball.getHeight(), ball.getWidth());
}