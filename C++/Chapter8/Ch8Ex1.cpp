#include <iostream>

struct Point {
  int x;
  int y;
};

struct Rectangle {
  Point topLeft;
  int width;
  int height;
};

Point lowerRight(const Rectangle& rect) {
  Point lowerRightPoint;
  lowerRightPoint.x = rect.topLeft.x + rect.width;
  lowerRightPoint.y = rect.topLeft.y + rect.height;
  return lowerRightPoint;
}

int main() {
  Rectangle rect;
  rect.topLeft.x = 2;
  rect.topLeft.y = 3;
  rect.width = 5;
  rect.height = 4;

  Point lowerRightPoint = lowerRight(rect);
  std::cout <<"Lower right point: (" << lowerRightPoint.x << ", " << lowerRightPoint.y << ")" << std::endl;

  return 0;
}
