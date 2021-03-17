#include <iostream>
#include <string>

using namespace std;

class prepaid_kartica
{
protected:
    double iznos;
public:
    prepaid_kartica()
    {
        iznos = 0;
    }
    prepaid_kartica(double izn)
    {
        iznos = izn;
    }
    void setIznos(double izn)
    {
        iznos = izn;
    }
    float getIznos() { return iznos; }
    //Metode:
    void NadoplatiRacun(double izn)
    {
        iznos = iznos + izn;
        cout << "Racun je nadoplacen s iznosom od: " << izn << " kn." << endl;
    }
    double ProvjeraStanja()
    {
        return iznos;
    }
    virtual void PosaljiSMS() = 0;
};

class tele2_kartica : public prepaid_kartica
{
protected:
    double cijena_SMS;
public:
    tele2_kartica()
    {
        iznos = 0;
        cijena_SMS = 0;
    }
    tele2_kartica(double izn, double mCijena_SMS) : prepaid_kartica(izn)
    {
        cijena_SMS = mCijena_SMS;
    }
    virtual void PosaljiSMS()
    {
        iznos = iznos - cijena_SMS;
        cout << "SMS je poslan po cijeni od: " << cijena_SMS << " kn." << endl;
    }
};

int main()
{
    tele2_kartica Kartica(20, 0.75);
    cout << "Iznos na racunu je: " << Kartica.ProvjeraStanja() << " kn." << endl;
    Kartica.NadoplatiRacun(25.74);
    cout << "Iznos na racunu je: " << Kartica.ProvjeraStanja() << " kn." << endl;
    prepaid_kartica* pokazivac;
    pokazivac = &Kartica;
    pokazivac->PosaljiSMS();
    pokazivac->ProvjeraStanja();
    return 0;
}