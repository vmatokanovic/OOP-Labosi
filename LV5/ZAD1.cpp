/* ---ZADATAK 1--- */
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class GeoIznimka : public exception{
float a, b, c;
public:
    const char* what(){
    return "TROKUT NIJE MOGUC!";
    }
    void getStranice(){
        cout << "Trokut sa stranicama " << a << ", " << b << ", " << c << ", nije moguc." << endl;
    }
    void setStranice(float a, float b, float c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

class Trokut
{
private:
    float a;
    float b;
    float c;
public:
    Trokut()
    {
        a = 1;
        b = 1;
        c = 1;
    }
    Trokut(float A, float B, float C)
    {
        if (A < 0 || B < 0 || C < 0 || (A + B <= C) || A + C <= B || B + C <= A)
        {
            GeoIznimka g;
            g.setStranice(A, B, C);
            throw g;
        }
        a = A;
        b = B;
        c = C;
    }
    void setStranice(float A, float B, float C)
    {
        a = A;
        b = B;
        c = C;
    }
    float getStranicaA()    {return a;}
    float getStranicaB()    {return b;}
    float getStranicaC()    {return c;}
    //Metode:

    float Opseg()
    {
        return a + b + c;
    }
    float Povrsina()
    {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) *  (s - b) * (s - c));
    }
    void Pravokutan()
    {
        if (a*a == (b*b + c*c) or b*b == (a*a + c*c)
             or c*c == (a*a + b*b))
            cout << "Trokut je pravokutan." << endl;
        else
            cout << "Trokut nije pravokutan." << endl;
    }
};


int main()
{
    try
    {
        Trokut trokut1;
        Trokut trokut2(4, 4, 4);
        cout << "Opseg 1. trokuta je: " << trokut1.Opseg() << endl;
        cout << "Opseg 2. trokuta je: " << trokut2.Opseg() << endl;
        if(trokut1.Povrsina() < trokut2.Povrsina()){
            cout << "Povrsina 1. trokuta je manja od povrsine 2. trokuta." << endl;
        }
        else if(trokut1.Povrsina() > trokut2.Povrsina()){
            cout << "Povrsina 1. trokuta je veca od povrsine 2. trokuta." << endl;
        }
        else{
            cout << "Povrsina 1. trokuta je jednaka povrsini 2. trokuta." << endl;
        }
    }
    catch(GeoIznimka g)
    {
        g.getStranice();
    }

    return 0;
}
