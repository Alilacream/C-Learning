#include <iostream>
using namespace std;
// le class 3awtaniii
class Point {
    int x;
    int y;
public:
    Point() { // for the sole purpose to create a table
        x = 0;
        y = 0;
    }
    Point(int xx, int yy) {
        x = xx;
        y = yy;
    }
    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }
    
    void affichier(){
        cout << "Point (x,y): " << x << ", " << y << endl;
    }
    
};

int main() {
    Point p0;
    Point p1(1,2);
    Point copie(p1);
    // afichier dak chi.
    p0.affichier();
    p1.affichier();
    copie.affichier();
    return 0;
}