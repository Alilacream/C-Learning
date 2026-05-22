#include <iostream>

using namespace std;

class CompteBancaire{
    private:
        double solde;
    public:
        CompteBancaire(double s) {
                solde = s;
        }
        double getSold() {
            return solde;
        }
        void affichier() {
            cout << "vous avez dans le solde: " << solde << endl;
        }
        void addFund(double f) {
            solde = solde + f;
        }
        void SubFund(double f) {
            if (f > solde) {
                cout << "impossi" << endl;
                exit (1);
            }
            solde = solde - f;
        }
        void transfert(CompteBancaire &Source, CompteBancaire &Destination, double Montant) {
            if (Montant <= 0) {
                cout << "Khoya rah motant inlogique ta jbd l 3a9a";
                exit(1);
            } else if (Montant > Source.getSold()) {
               cout << "7bibna ma 3ndksh had rze9 kamel"; 
               exit(1);
            }
            // edge cases thnina mnhom
            Destination.addFund(Montant);
            Source.SubFund(Montant);
        } 
};
int main() {
     CompteBancaire C1(5000);
     CompteBancaire C2(8000);
     // transfert
     C1.transfert(C1, C2, 2000);
     C1.affichier();
     C2.affichier();
    return 0;
}