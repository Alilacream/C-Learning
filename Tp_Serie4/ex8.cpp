#include <iostream>

using namespace std;

class Personne{
    public: 
    string nom;
    string prenom;
    // ila drti constructeur hna, ma ghadish ymken dir constructure additionnel l etudiant 
    Personne(string n, string p) {
        nom = n;
        prenom = p;
    }
    void afficher() {
        cout << "Bonjour Monsieur/Madamme: " << nom << " " << prenom << endl;
    }
};
// a latif had l'héritance mishkla
class Etudiant: public Personne 
{
    public:
    string filiere;
    Etudiant(string n, string p, string f) : Personne(n,p)
    {
        filiere = f;
    }
    void afficher() {
        cout << "Bonjour Monsieur/Madamme: " << nom << " " << prenom << "Studying in: " << filiere << endl;
    }
};
int main() {
    Etudiant etd("ali", "mohamed", "info");
    etd.afficher();
    return 0;
}