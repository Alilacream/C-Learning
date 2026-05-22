#include <iostream>

using namespace std;

class Point {
public:
  int x;
  int y;
};
int main() {
  // alouez
  Point *p = new Point;
  cout << p << endl;
  p->x = 1;
  p->y = 2;
  cout << "valeur x,y respectivement: " << p->x << ", " << p->y << endl;
  // liberez
  delete (p);
  cout << p;
  return 0;
}
