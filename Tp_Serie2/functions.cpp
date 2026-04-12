#include "class.cpp"
#include <iostream>
using namespace std;
/*  === EXERCICE 1 ===   */
essai *Solution::raz(essai *number) {
  int choice;
  cout << "choisit votre type de libérage" << endl;
  cout << "1.Par address" << endl;
  cout << "2.Par reférence" << endl;
  cout << "votre choix[1/0]: ";
  cin >> choice;
  // par reference
  essai &ref = *number;
  // par pointeur/address
  essai *pt = number;
  // test case
  switch (choice) {
  case 0:
    ref.n = 0;
    ref.x = 0;
    break;

  case 1:
    pt->n = 0;
    pt->x = 0;
    break;
  default:
    cout << "not known";
    break;
  }

  return number;
}

void Solution::test() {

  // initialiser les champs <x, n>
  essai *test = new essai;
  cout << "initialiser le champs n";
  cin >> test->n;
  cout << "initialiser le champs x";
  cin >> test->x;
  // appelée la fonction raz.
  essai *resultat = raz(test);
  cout << "les deux champ <x, n>" << resultat;
}

/*  === EXERCICE 2/ EXERCICE 3 ===  */
void exercice_3() {
  Rectangle format(5.0, 3.0);
  format.surface();
  format.affichier();
}
