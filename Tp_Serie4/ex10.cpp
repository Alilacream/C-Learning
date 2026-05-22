#include <iostream>

using namespace std;

class Appareil {
    public:
    void allumer() {
        cout << "Apprareil allumé" << endl;
    }
};
class Machine {
    public:
    void fonctionner() {
        cout << "Machine en fonctionnement" << endl;
    }
};
class Photocopieuse: public Appareil, public Machine {
    public:
    void demarer() {
        allumer();
        fonctionner();
    }
};
int main() {
    Photocopieuse P;
    P.demarer();
    return 0;
}