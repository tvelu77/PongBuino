#ifndef Ball_H
#define Ball_H

class Ball {
  public:
    Ball(int height, int width);
    int getXPosition();
    int getYPosition();
    int getHeight();
    int getWidth();
    void xBounce();
    void yBounce();
    void updateXPosition();
    void updateYPosition();
  private:
    int xPosition;
    int yPosition;
    int xSpeed;
    int ySpeed;
    int height;
    int width;
};

#endif