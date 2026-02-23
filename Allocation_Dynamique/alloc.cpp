#include <cstddef>
#include <cstdlib>
#include <iostream>
#define EXIT_SUCCESS 0
#define EXIT_ERROR 1
using namespace std;

void print_table(int *p, int size) {
  for (int *i = p; i < p + size; i = i + 1) {
    cout << *i << endl;
  }
}
int main(int argc, char *argv[]) {
  int number;
  cout << "enter value: ";
  cin >> number;
  int *p;
  p = new int(number);
  // makayanch limite f recusive call
  cout << "value is: " << *p << endl;
  // sber nsiyiw:
  // trat garbage value je sais pas 3lach
  print_table(p, number);
  cout << "original adress: " << &number << endl;
  delete p;
  if (p == NULL) {
    cout << "not deleted something went wrong";
    exit(EXIT_ERROR);
  }
  cout << "deleted succesfully, Address: " << p;

  return EXIT_SUCCESS;
}
