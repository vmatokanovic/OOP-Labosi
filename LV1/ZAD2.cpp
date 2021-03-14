/**< ZADATAK 2 */
#include <iostream>
#include <cmath>

using namespace std;

class Complex{
    friend Complex zbroji (Complex&, Complex&); // Prijateljska funkcija
    friend double moduleOfComplex(Complex& referenca);  // Prijateljska funkcija
private:
    double reDio;
    double imagDio;
public:
    Complex(double reDio, double imagDio);
    Complex();
    void setComplex(double mReDio, double mImagDio){
        reDio = mReDio;
        imagDio = mImagDio;
        cout << "Postavili ste vrijednost kompleksnog broja: z = " << reDio << "+" << imagDio << "i" << endl;
    }
    double getComplex(){
        cout << "Realni dio: " << reDio << " ,a imaginarni dio: " << imagDio << endl;
        return reDio, imagDio;}

};

double moduleOfComplex(Complex& referenca){
    double modul = sqrt((referenca.reDio * referenca.reDio) + (referenca.imagDio * referenca.imagDio));
    return modul;
}

Complex zbroji(Complex& ref1, Complex& ref2){
    Complex result;
    result.reDio = ref1.reDio + ref2.reDio;
    result.imagDio = ref1.imagDio + ref2.imagDio;
    return result;
}

Complex::Complex(double mReDio, double mImagDio){
    reDio = mReDio;
    imagDio = mImagDio;
}

Complex::Complex(){
    reDio = 1;
    imagDio = 1;
}

int main()
{
    Complex prviKomplBroj;
    prviKomplBroj.setComplex(7,3);
    prviKomplBroj.getComplex();
    cout << moduleOfComplex(prviKomplBroj) << endl;

    Complex drugKomplBroj(10,8);
    drugKomplBroj.getComplex();
    cout << moduleOfComplex(drugKomplBroj) << endl;

    zbroji(prviKomplBroj, drugKomplBroj);

    return 0;
}
