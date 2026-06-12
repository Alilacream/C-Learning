#include <iostream>

using namespace std;

// pour créer l'Utilisateur
class Utilisateur {
  protected:
    string nom;
  public:
    Utilisateur(string n): nom(n) {}
    void affichierInfos() {
      cout << "Nom: " << nom << endl;
    }
};
// pour créer Developpeur -> Utilisateur
class Developpeur : public Utilisateur {
  protected:
    string LanguageFavori;
  public:
    Developpeur(string n, string language): Utilisateur(n), LanguageFavori(language) {}
    void affichierInfos() {
      Utilisateur::affichierInfos();
      cout << "Language Favori: " << LanguageFavori << endl;
    }
};

// pour créer Administrateur -> Developpeur -> Utilisateur
// puisque déja j'ai la hiearchy entre dev et utilsateur donc 
// sa suffit que admin -> dev;
class Administrateur: public Developpeur {
  protected:
    int niveauAccess;
  public:
    Administrateur(string n , string language, int niveau): Developpeur(n, language) , niveauAccess(niveau) {}
    void affichierInfos() {
      Developpeur::affichierInfos();
      cout << "Niveau d'Access: " << niveauAccess << endl;
    }
};

int main() {
  Administrateur admin("YAMAL", "Python", 3);
  admin.affichierInfos();
  return 0;
}
