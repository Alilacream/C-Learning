#include "class.cpp"
#include <iostream>
/*  === EXERCICE 1 ===   */
essai *raz(essai *number) {
  int choice;
  std::cout << "choisit votre type de libérage" << std::endl;
  std::cout << "1.Par address" << std::endl;
  std::cout << "2.Par reférence" << std::endl;
  std::cout << "votre choix[1/0]: ";
  std::cin >> choice;
  // par reference
  essai &ref = *number;
  // par pointeur/address
  essai *pt = number;
  // test case
  switch (choice) {
  case 0: {
    ref.n = 0;
    ref.x = 0;
    break;
  }
  case 1: {
    pt->n = 0;
    pt->x = 0;
    break;
  }

  default:
    std::cout << "not known";
    break;
  }

  return number;
}

void test() {

  // initialiser les champs <x, n>
  essai *test = new essai;
  std::cout << "initialiser le champs n";
  std::cin >> test->n;
  std::cout << "initialiser le champs x";
  std::cin >> test->x;
  // appelée la fonction raz.
  essai *resultat = raz(test);

  std::cout << "les deux champ <x, n>" << resultat->x << resultat->n
            << std::endl;
}

/* === EXERCICE 1 === */
void exercice_01() {
  std::cout << "Bonjour Chére etudiante dans la série 2 du Tp C++ commençant"
            << std::endl;
  // timer sleep of 3 seconds
  test();
}
/*  === EXERCICE 2/ EXERCICE 3 ===  */
void exercice_03() {
  std::cout << "Continuant a l'exercice 2 et 3 qui on le meme principe."
            << std::endl;
  Rectangle format(5.0, 3.0);
  format.surface();
  format.affichier();
}
