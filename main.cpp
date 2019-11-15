#include <iostream>
#include "div.h"
using namespace std;

class Point {
  int x;
  int y;
  
  int scalar() {
    return this.x * this.y;
  }

  int distanceTo(Point other) {

  }
}

abstract class Figure {
  int square() = 0;
}

class Circle : Figure {
  int radius;
  int square() {
    return PI * r * r;
  }
}

class Square : Figure {
  int width;
  int square() {
    return width * width;
  }
}

int main(){
    Point * p = new Point(10, 52);
    
    int quotient = p.scalar();
    cout << quotient;

    delete p;

    return 0;
}
