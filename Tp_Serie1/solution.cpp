#include <cstdlib>
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

void Solution::Menu() {
  display("\n--- Menu ---");
  display("1. Ajouter 1\n2. Multiplier par 2\n3. Soustraire 4\n4. Quitter");
}

void Solution::Operation(int *N, int choice) {
  switch (choice) {
  case 1:
    (*N)++;
    break;
  case 2:
    *N *= 2;
    break;
  case 3:
    *N -= 4;
    break;
  default:
    display("Invalid choice.");
    break;
  }
}

float **Solution::make_matrix(int row, int col) {
  // allocation des ligne
  float **matrix = new float *[row];
  // allocation des colone
  for (int i = 0; i < row; i++) {
    matrix[i] = new float[col];
  }
  // initaliser
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      want(matrix[i][j]);
    }
  }
  return matrix;
}

void Solution::display_matrix(float **Matrix) {
  int len_row = sizeof(Matrix) / sizeof(Matrix[0]);
  int len_col = sizeof(Matrix[0]) / sizeof(Matrix[0][0]);
  for (int i = 0; i < len_row; i++) {
    for (int j = 0; j < len_col; j++) {
      want(Matrix[i][j]);
    }
  }
}

float Solution::moy_row(float **Matrix) {
  int len_row = sizeof(Matrix) / sizeof(Matrix[0]);
  int len_col = sizeof(Matrix[0]) / sizeof(Matrix[0][0]);
  float sum = 0;
  for (int i = 0; i < len_row; i++) {
    for (int j = 0; j < len_col; j++) {
      if (j == len_col - 1) {
        display("This is the sum of the " << i << "ligne: " << sum);
        continue;
      }
      sum += Matrix[i][j];
    }
    sum = 0;
  }
  return sum / len_row;
}

float Solution::moy_col(float **Matrix) {
  int len_row = sizeof(Matrix) / sizeof(Matrix[0]);
  int len_col = sizeof(Matrix[0]) / sizeof(Matrix[0][0]);
  float sum = 0;
  for (int i = 0; i < len_row; i++) {
    for (int j = 0; j < len_col; j++) {
      if (j == len_col - 1) {
        display("This is the sum of the " << i << "col: " << sum);
        continue;
      }
      sum += Matrix[j][i];
    }
    sum = 0;
  }
  return sum / len_col;
}
float Solution::moy_matrix(float **Matrix) {
  int len_row = sizeof(Matrix) / sizeof(Matrix[0]);
  int len_col = sizeof(Matrix[0]) / sizeof(Matrix[0][0]);
  float sum = 0;
  for (int i = 0; i < len_row; i++) {
    for (int j = 0; j < len_col; j++) {

      sum += Matrix[i][j];
    }
  }
  return sum / (len_row + len_col);
}

int main() {
  Solution app;
  app.execute();
  return 0;
}
