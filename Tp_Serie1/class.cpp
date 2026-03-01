#include <iostream>

#define display(x) cout << x << endl;
#define want(x) cin >> x;
using namespace std;

class Solution {
private:
  int tableau[5] = {10, 20, 30, 40, 50}; // Initialized for testing

public:
  void Menu();
  void Operation(int *num, int choice);
  void execute(); // Renamed from main
  void display_matrix(float **Matrix);
  float **make_matrix(int rows, int cols);
  float moy_row(float **Matrix);
  float moy_col(float **Matrix);
  float moy_matrix(float **Matrix);
};

void Solution::execute() {
  // === EXERCICE 1 ===
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += tableau[i]; // Fix: added '+'
  }
  display("Sum: " << sum);
  display("Moyenne: " << (float)sum / 5);

  // === EXERCICE 2 ===
  int N, U = 0;
  display("Enter N for sequence calculation:");
  want(N);

  if (N < 0) {
    display("The given number is Negative.");
  } else {
    for (int i = N; i >= 0; i--) {
      if (i == 0)
        U += 3;
      else
        U += (i - 4) / 3;
    }
    display("Result U: " << U);
  }

  // === EXERCICE 3 ===
  int choice, val;
  cout << "Entrer votre Numéro ici: ";
  cin >> val;
  // infinement jusqu'a l'utilisateur choisi 4.
  do {
    Menu();
    cout << "Choix: ";
    cin >> choice;
    Operation(&val, choice);
    display("Current Value: " << val);
  } while (choice != 4);
  // === EXERCICE 5 ===
  float **M = make_matrix(3, 3);
  display_matrix(M);
}
