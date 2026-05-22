#include <iostream>

using namespace std;
class Point {
    int x;
    int y;
public:
    Point() { // for the sole purpose to create a table
        }
    Point(int xx, int yy) {
            x = xx;
            y = yy;
    }
    
    void affichier(){
        cout << "Point (x,y): " << x << ", " << y << endl;
    }
    
};
int main() {
    Point *p1 = new Point(1,2);
    Point *T = new Point[1] {*p1};
    p1->affichier();
    T[0].affichier();
    delete p1;
    delete[] T;
    return 0;
}