#include <iostream>

using namespace std;

class Personne {
public:
  static int combien;
  string nom;
  int age;
  void ajouter() {
    combien++;
    static Personne p;
    p.nom = "berhosh";
    p.age = 10;
  };
};
// initialisation
int Personne::combien = 0;
int main() {
  Personne p1;
  p1.ajouter();
  Personne p2;
  p2.ajouter();
  static Personne p3;
  p3.ajouter();
  // normalement l compteur khaso ykon 3
  cout << "Combien: " << p1.combien << endl;
  return 0;
}
