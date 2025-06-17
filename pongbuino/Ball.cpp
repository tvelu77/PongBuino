#include "Ball.h"

#define DEFAULT_X_POSITION 32
#define DEFAULT_Y_POSITION 32
#define DEFAULT_X_SPEED 1
#define DEFAULT_Y_SPEED 1

Ball::Ball(int height, int width) {
  this->height = height;
  this->width = width;
  this->xPosition = DEFAULT_X_POSITION;
  this->yPosition = DEFAULT_Y_POSITION;
  this->xSpeed = DEFAULT_X_SPEED;
  this->ySpeed = DEFAULT_Y_SPEED;
}

int Ball::getXPosition() {
  return this->xPosition;
}

int Ball::getYPosition() {
  return this->yPosition;
}

int Ball::getHeight() {
  return this->height;
}

int Ball::getWidth() {
  return this->width;
}

void Ball::xBounce() {
  this->xSpeed *= -1;
}

void Ball::yBounce() {
  this->ySpeed *= -1;
}

void Ball::updateXPosition() {
  this->xPosition = this->xPosition + this->xSpeed;
}

void Ball::updateYPosition() {
  this->yPosition = this->yPosition + this->ySpeed;
}
