/**< ZADATAK 1 */
#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

class Die{  //kockica
    friend int isJamb(Die refPolje[]);
private:
    int broj;
public:
    Die (int aBroj);
    Die ();
    void setBroj(int aBroj){    //metoda za postavljanje vrijednosti kockice
        broj = aBroj;
        cout << "Postavili ste vrijednost kockice na: " << broj << endl;
    }
    int getBroj(){ return broj;}    //metoda za pristup vrijednosti kockice
    void baciKockice();
};

void Die::baciKockice(){    //funkcija za bacanje kockice random broj od 1-6
    broj = rand() % 6 + 1;
    cout << "Broj koji ste dobili bacanjem te kockice je: " << broj << endl;
}

Die::Die (int aBroj){   //parametarski konstruktor
    broj = aBroj;
}

Die::Die(){  //defaultni konstruktor
    broj = 1;
}

int isJamb(Die refPolje[]){
    int prvaKock = refPolje[0].broj;
    for(int i = 0; i < 6; i++){
        if(prvaKock != refPolje[i].broj){
            return 0;
        }
    }
    return 1;
}

int main()
{
    srand(time(0));

    Die poljeKockica[5], i;
    for(int i = 0; i < 6; i++){ //kreirano polje kockica s random bacanjima
        poljeKockica[i].baciKockice();
        cout << "Vrijednost kockice: " << poljeKockica[i].getBroj() << endl;
    }

    if(isJamb(poljeKockica)){   //koristenje funkcije za provjeru je li jamb
        cout << "Dobili ste jamb! Cestitamo!" << endl;
    } else {
        cout << "Niste dobili jamb, nazalost." << endl;
    }

    cout << endl;
    Die plava;  //koristenje defaultnog konstruktora
    plava.baciKockice();    //koristenje funkcije za bacanje kockice za plavu kockicu
    plava.setBroj(4);   //koristenje settera

    return 0;
}
