#include <cstdlib>
#include <iostream>
#include <vector>
#define display(x) cout << x;
using namespace std;

int main(int argc, char *argv[]) {
  vector<int> table = {1, 2, 3, 4, 5, 6};
  display(table.back());
  return EXIT_SUCCESS;
}
