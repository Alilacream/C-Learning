#include <iostream>

using namespace std;

class Personne {
public:
  string nom;
  int age;
};
void affichier(Personne p) {
  cout << "Son nom est: " << p.nom << " et son age et: " << p.age << endl;
}
int main(int argc, char **argv) {
  Personne p1;
  p1.nom = "ali";
  p1.age = 20;
  Personne p2;
  p2.nom = "karim";
  p2.age = 21;
  affichier(p1);
  affichier(p2);
  return 0;
}
