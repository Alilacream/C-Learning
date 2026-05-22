#include <iostream>

using namespace std;


class Employe {
    public:
    double salaire;
        Employe(double s) {
            salaire = s;
        }
        void afficher() {
            cout << "le salaire: " << salaire << endl;
        }
};
class Artist {
    public:
    string discipline;
        Artist(string d) {
            discipline = d;
        }
        void afficher() {
            cout << "la discipline ou kda: " << discipline << endl;
        }
};
class EmployeArtist : public Employe, public Artist {
    public:
    EmployeArtist(double s, string d): Employe(s), Artist(d) {}
    void afficherInfos(){
        cout << "la discipline && le salaire: " << discipline << salaire;
    }
};
int main() {
    EmployeArtist EA(2500, "musique");
    EA.afficherInfos();
    return 0;
}