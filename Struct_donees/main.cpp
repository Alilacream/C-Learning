#include <iostream>

#define display(x) std::cout << x << std::endl;
using namespace std;

typedef struct Note {
  double math;
  double pc;
  double svt;
  // haaa l interfaces
} Note;
// haaa 7na wselna l class
// object -> variable de class.
class Etudiant {
  // on peut pas accéder à c'est données en Main.
private:
  int id;
  string name;
  Note note;
  // hahia fonction sahla mahla
  // les fonction rahom public, accessible en Main.
public:
  double moyenne(void);

  void relvee_note(void);
  void initliaser(void);
};
// main use case
int main(int argc, char *argv[]) {
  Etudiant ali;
  display("Dkhel no9atek");
  // les notes
  ali.initliaser();
  // display la moyenne
  display(ali.moyenne());
  // la relvée de note.
  ali.relvee_note();

  return 0;
}

// you can define functions utility here by using Class call
void Etudiant::initliaser() {
  std::cin >> id;
  std::cin >> name;
  std::cin >> note.math;
  std::cin >> note.pc;
  std::cin >> note.svt;
}
double Etudiant::moyenne() { return (note.math + note.pc + note.svt) / 3; }
void Etudiant::relvee_note() {
  std::cout << "Math: ->" << note.math << std::endl;
  std::cout << "PC: ->" << note.pc << std::endl;
  std::cout << "SVT: ->" << note.svt << std::endl;
  std::cout << "moyenne general: ->" << moyenne();
}
