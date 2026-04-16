#include <cstddef>
#include <cstdlib>
#include <iostream>
#define EXIT_SUCCESS 0
#define EXIT_ERROR 1
using namespace std;

void print_table(int *p, int size) {
  for (int *i = p; i < p + size; i = i + 1) {
    std::cout << *i << std::endl;
  }
}
int main(int argc, char *argv[]) {
  int number;
  std::cout << "enter value: ";
  std::cin >> number;
  int *p;
  p = new int(number);
  // makayanch limite f recusive call
  std::cout << "value is: " << *p << std::endl;
  // sber nsiyiw:
  // trat garbage value je sais pas 3lach
  print_table(p, number);
  std::cout << "original adress: " << &number << std::endl;
  delete p;
  if (p == NULL) {
    std::cout << "not deleted something went wrong";
    exit(EXIT_ERROR);
  }
  std::cout << "deleted succesfully, Address: " << p;

  return EXIT_SUCCESS;
}
