#include <iostream>

using namespace std;
// hado homa l macros.
// t9ed dirhom if statment checks which is new.
#define show(x) cout << x;
#define display(x) cout << x << endl;
#define check(x, y) ((x > y) ? x : y);
int main(int argc, char *argv[]) {
  display("hello there");
  int responce = check(1, 2);
  if (responce == 2) {
    display("the bigger number is the second parameter");
  } else {
    display("the bigger number is the first parameter");
  }

  return 0;
}
