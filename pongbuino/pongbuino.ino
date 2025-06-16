#include <Gamebuino-Meta.h>

void setup() {
  gb.begin();
}

void loop() {
  while (!gb.update()) {
    gb.display.clear();
  }
  gb.display.print("WIP ;)\nThis program will be a classic pong !");
  gb.display.setColor(LIGHTBLUE);
  gb.display.print("\n- tvelu77");
}
