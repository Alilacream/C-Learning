#include <iostream>
typedef struct essai {
  int n;
  float x;
} essai;
class Rectangle {
private:
  float longueur;
  float largeur;

public:
  Rectangle(float l, float L) : longueur(l), largeur(L) {}
  float surface() { return longueur * largeur; }
  void affichier() { std::cout << "la surface est:" << surface(); }
};
