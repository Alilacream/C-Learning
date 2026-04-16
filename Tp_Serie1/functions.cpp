#include "class.cpp"
#include <array>
#include <iostream>
#define display(x) std::cout << x << std::endl;
#define want(x) std::cin >> x;
using namespace std;
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

array<int, 10> Solution::remplitA() {
  array<int, 10> tab;
  for (int i = 0; i < 10; i++) {
    want(tab[i]);
  }
  return tab;
}

void Solution::impA(array<int, 10> tab) {
  for (int i = 0; i < 10; i++) {
    display(tab[i] << "\t" << "<->" << "\t");
  }
}
