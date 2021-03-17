/**< ZADATAK 1 */
#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

class Die {  //kockica
    friend int isJamb(Die refPolje[]);
private:
    int broj;
public:
    Die(int aBroj);
    Die();
    void setBroj(int aBroj) {    //metoda za postavljanje vrijednosti kockice
        broj = aBroj;
    }
    int getBroj() { return broj; }    //metoda za pristup vrijednosti kockice
    void baciKockicu();
};

void Die::baciKockicu() {    //funkcija za bacanje kockice random broj od 1-6
    broj = rand() % 6 + 1;
    cout << "Broj koji ste dobili bacanjem te kockice je: " << broj << endl;
}

Die::Die(int aBroj):broj(aBroj) { }

Die::Die():broj(1) { }

int isJamb(Die refPolje[], int size) {
    int n = size;
    int prvaKock = refPolje[0].getBroj();
    for (int i = 0; i < n; i++) {
        if (prvaKock != refPolje[i].getBroj()) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    srand(time(0));
    int const n = 5;
    Die poljeKockica[n], i;
    for (int i = 0; i < n; i++) { //kreirano polje kockica s random bacanjima
        poljeKockica[i].baciKockicu();
        cout << "Vrijednost kockice: " << poljeKockica[i].getBroj() << endl;
    }

    if (isJamb(poljeKockica, n)) {   //koristenje funkcije za provjeru je li jamb
        cout << "Dobili ste jamb! Cestitamo!" << endl;
    }
    else {
        cout << "Niste dobili jamb, nazalost." << endl;
    }

    cout << endl;
    Die plava;  //koristenje defaultnog konstruktora
    plava.baciKockicu();    //koristenje funkcije za bacanje kockice za plavu kockicu
    plava.setBroj(4);   //koristenje settera

    return 0;
}