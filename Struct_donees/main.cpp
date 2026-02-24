#include <iostream>

#define display(x) cout << x << endl;
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
  double moyenne(void) { return (note.math + note.pc + note.svt) / 3; };

  void relvee_note(void) {
    cout << "Math: ->" << note.math << endl;
    cout << "PC: ->" << note.pc << endl;
    cout << "SVT: ->" << note.svt << endl;
    cout << "moyenne general: ->" << moyenne();
  }
  void initliaser(void) {
    cin >> id;
    cin >> name;
    cin >> note.math;
    cin >> note.pc;
    cin >> note.svt;
  }
};
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
