#include <iostream>

// Les Classes
// EXERICE 1:
class CompteBancaire {
private:
  static int dernierNumero;
  int numero;

public:
  CompteBancaire() {
    numero = dernierNumero;
    dernierNumero++;
  }
  // affichage
  void affichierNumero() {
    std::cout << "le numero est: " << numero << std::endl;
  }
};
int CompteBancaire::dernierNumero = 2000;
// EXERICE 2:
class ComptEpargne {
private:
  static float tauxInteret;

public:
  static float modifierTaux(float T) {
    tauxInteret = T;
    return tauxInteret;
  }
  static void AffichierTaux() {
    std::cout << "le taux est " << tauxInteret << std::endl;
  }
};
float ComptEpargne::tauxInteret = 0.05;
// EXERCICE 3:
class Volume {
public:
  // cube
  float calculerVolume(float cote) { return cote * cote * cote; }
  // cylindre
  float calculerVolume(float rayon, float hauteur) {
    return (rayon * rayon) * hauteur * 3.14;
  }
  // parallelepide rectangle
  float calculerVolume(float largeur, float hauteur, float longueur) {
    return largeur * hauteur * longueur;
  }
};
// EXERCICE 4
class Object {
public:
  Object *getThis() { return this; }
};
// EXERCICE 5
class Rectangle {
private:
  int largeur;
  int hauteur;

public:
  Rectangle(int l, int h) {
    largeur = l;
    hauteur = h;
  }
  int calculerAire() { return largeur * hauteur; }
  void affichier(int aire) {
    std::cout << "l'aire du rectangle: " << aire << std::endl;
  }
  ~Rectangle() {
    std::cout << "Destructeur Access, Largeur: " << largeur << std::endl;
  }
};
// EXERCICE 6:
class Personne {
private:
  std::string nom;
  int age;

public:
  // This is the Default Constructor
  Personne() {
    // You can leave it empty or give it default values
    // avoiding array error
  }
  Personne(std::string n, int a) {
    nom = n;
    age = a;
  }
  ~Personne() { std::cout << "le nom de l'object detruit" << nom << std::endl; }
  void affichage() {
    std::cout << "Le nom: " << nom << " l'age: " << age << std::endl;
  }
};
int main() {
  // Exercice 1:
  std::cout << "Exercice 1" << std::endl;
  CompteBancaire c1;
  CompteBancaire c2;
  CompteBancaire c3;
  c1.affichierNumero();
  c2.affichierNumero();
  c3.affichierNumero();
  // Exercice 2:
  std::cout << "Exercice 2" << std::endl;
  ComptEpargne ce1;
  ce1.AffichierTaux();
  ce1.modifierTaux(0.065);
  ce1.AffichierTaux();
  // Exercice 3:
  Volume v;
  std::cout << "le Volume de cube: " << v.calculerVolume(3) << std::endl;
  std::cout << "le Volume de cylindre: " << v.calculerVolume(2, 5) << std::endl;
  std::cout << "le Volume de parallelepide rectangle: "
            << v.calculerVolume(3, 4, 2) << std::endl;
  // Exercice 4:
  Object obj;
  std::cout << "l'adress d'obj: " << &obj << std::endl;
  // same adress
  Object *new_obj = obj.getThis();
  // meme principe qu'un pointeur.
  Object *pt = &obj;
  // diffrent adress:
  std::cout << "l'adress de nouveau objet: " << new_obj << std::endl;
  std::cout << "l'adress de pointeur objet: " << pt << std::endl;
  // Exercice 5:
  Rectangle R1(4, 5), R2(6, 7);
  // Destructeur se fonctionne à la fin de la fonction main.
  // L'aure de l'appel du destructeur, i'll s'appel à fin de bloc du code.
  // Donc  si on a R1 dans la premier ligne et R2 dans la deuxieme ligne.
  // à la fin, la deuxieme ligne sera le premier à executé et finalement la
  // premier ligne sera la dernier. NOTE: le destructeur s'arrive à la fin
  // du bloc.
  R1.affichier(R1.calculerAire());
  R2.affichier(R2.calculerAire());
  // Exercice 6:
  Personne T[3] = {Personne("ali", 18), Personne("Mohammed", 15)};
  for (int i = 0; i < 3; i++) {
    T[i].affichage();
  }
  return 0;
}
