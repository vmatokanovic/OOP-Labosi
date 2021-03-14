/**< ZADATAK 1 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Kontakt{
    friend ostream& operator<< (ostream& izlaz, Kontakt& ref);
private:
    string imePrezime;
    string telBroj;
    string mail;
public:
    Kontakt();
    Kontakt(string aImePrezime, string aTelBroj, string aMail);
    void setKontakt(string aImePrezime, string aTelBroj, string aMail){
        imePrezime = aImePrezime;
        telBroj = aTelBroj;
        mail = aMail;
    }
    string getImePrezime(){
        return imePrezime;
    }
    string getTelBroj(){
        return telBroj;
    }
    string getMail(){
        return mail;
    }
};

Kontakt::Kontakt(){
    imePrezime = "Nije upisano";
    telBroj = "Nije upisano";
    mail = "Nije upisano";
}

Kontakt::Kontakt(string aImePrezime, string aTelBroj, string aMail){
    imePrezime = aImePrezime;
    telBroj = aTelBroj;
    mail = aMail;
}

ostream& operator<< (ostream& izlaz, Kontakt& ref)
{
    izlaz<< "Ime i prezime: " << ref.imePrezime<<", telefonski broj: "<<ref.telBroj<< ", e-mail: " << ref.mail;
    return izlaz;
}

int main()
{
    Kontakt poljeKontakata[2];
    poljeKontakata[0] = Kontakt("Ivan Ivanic", "0924538765", "ivan.ivanic@hotmail.com");
    poljeKontakata[1] = Kontakt("Marko Markovan", "0957736641", "marko.markovan@gmail.com");
    poljeKontakata[2] = Kontakt("Slavko Slavisa", "0993865542", "slavko1132@gmail.com");
    string ime, buffer;
    cout << "Unesite ime datoteke u koju zelite spremiti kontakte: ";
    getline(cin, ime);
    ofstream spremljeniKontakti(ime);
    for(int i = 0; i < 3; i++){
        spremljeniKontakti << poljeKontakata[i] << endl;
    }
    spremljeniKontakti.close();
    return 0;
}
