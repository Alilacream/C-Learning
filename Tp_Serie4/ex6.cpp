#include <iostream>
using namespace std;

class Chaine {
     char *chaine;
public:
    Chaine() {
        char c[12] = "chaine vide";
        chaine = c;
    }
    Chaine(char *c) {
        chaine = c;
    }
    Chaine(const Chaine &c) {
        chaine = c.chaine;
    }
    ~Chaine() {
        cout << "hani ghadi nhres :3" << endl;
    }
    void affichier() {
        cout << "Gha shno kayen" << *chaine << endl;
    }
};

int main() {
    Chaine c;
    char *sa = new char;
    cout << "enter un nom wla shi twichiya rak tma: ";
    cin >> sa;
    Chaine s(sa);
    Chaine copie(s);
    // sf affichier rak tma
    c.affichier();
    s.affichier();
    copie.affichier();
    delete sa;

}