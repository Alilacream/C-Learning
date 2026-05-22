#include <iostream>

using namespace std;

class ALI {
    public:
    void afficher() {
        cout << "ali" << endl;
    }
};
class BACHIR {
    public:
    void afficher() {
        cout << "bachir" << endl;
    }
};

class CHADI: public ALI, public BACHIR {
    public:
    void afficherTout() {
        ALI::afficher();
        BACHIR::afficher();
    }
};
int main() {
    CHADI chadi;
    chadi.afficherTout();
    return 0;
}