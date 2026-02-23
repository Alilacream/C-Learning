#include <iostream>

using namespace std;
#define display(x) cout << x << endl;
// had chi fekrni b interface use li kayna f golang.
void ali() { display("hahowa ali"); }
void ali(int variable) { display(variable); }
void ali(double variable) { display(variable) }
void ali(string ali) { display(ali); }

double ali(int surchage, float tva, int combien) {
  return (surchage + combien) - tva;
}

int main(int argc, char *argv[]) {
  ali();
  ali("hmida lamba");
  ali(1);
  ali(1.5);
  int profit = ali(10, 20, 10);
  if (profit >= 50) {
    display("khdemna mliih");
  } else {
    display("ma khdmnash mlih a khmadi");
  }
  return 0;
}
