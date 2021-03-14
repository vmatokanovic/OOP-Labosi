#include <iostream>
#include <string>

using namespace std;

class prepaid_kartica
{
protected:
    float iznos;
public:
    prepaid_kartica()
    {
        iznos = 0;
    }
    prepaid_kartica (float izn)
    {
        iznos = izn;
    }
    void setIznos(float izn)
    {
        iznos = izn;
    }
    float getIznos()    {return iznos;}
    //Metode:
    void NadoplatiRacun(float izn)
    {
        iznos = iznos + izn;
        cout << "Racun je nadoplacen s iznosom od: " << izn << " kn." << endl;
    }
    void ProvjeraStanja()
    {
        cout << "Stanje na racunu je: " << iznos << " kn." << endl;
    }
    virtual void PosaljiSMS()=0;
};

class tele2_kartica : public prepaid_kartica
{
protected:
    float cijena_SMS;
public:
    tele2_kartica()
    {
        iznos = 0;
        cijena_SMS = 0;
    }
    tele2_kartica (float izn, float mCijena_SMS) : prepaid_kartica(izn)
    {
        cijena_SMS = mCijena_SMS;
    }
    virtual void PosaljiSMS()
    {
        iznos = iznos - cijena_SMS;
        cout << "SMS je poslan po cijeni od: " << cijena_SMS << " kn."<< endl;
    }
};

int main()
{
    tele2_kartica Kartica(20, 0.75);
    Kartica.ProvjeraStanja();
    Kartica.NadoplatiRacun(25);
    Kartica.ProvjeraStanja();
    prepaid_kartica *pokazivac;
    pokazivac = &Kartica;
    pokazivac->PosaljiSMS();
    pokazivac->ProvjeraStanja();
    return 0;
}
