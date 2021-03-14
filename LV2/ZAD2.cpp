#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Vektor{
    friend Vektor operator+ (const Vektor&, const Vektor&);
    friend bool operator< (const Vektor&, const Vektor&);
    friend ostream& operator<< (ostream&, Vektor&);
private:
    int i;
    int j;
    int k;
public:
    Vektor();
    Vektor(int i, int j, int k);
    Vektor& operator= (const Vektor& ref){
        i = ref.i;
        j = ref.j;
        k = ref.k;
        return *this;
    }
};

Vektor::Vektor(){
    i = 1;
    j = 1;
    k = 1;
}

Vektor::Vektor(int i, int j, int k){
    this-> i = i;
    this-> j = j;
    this-> k = k;
}

ostream& operator<< (ostream& izlaz, Vektor& ref){
    izlaz << "i = " << ref.i << ", j = " << ref.j << ", k = " << ref.k << endl;
    return izlaz;
}

Vektor operator+ (const Vektor& v1, const Vektor& v2){
    return Vektor(v1.i+v2.i, v1.j+v2.j, v1.k+v2.k);
}

bool operator< (const Vektor& v1, const Vektor& v2){
    int v1size = v1.i + v1.j + v1.k;
    int v2size = v2.i + v2.j + v2.k;
    if(v1size < v2size){
        return true;
    } else {
        return false;
    }
}

int main()
{
    Vektor v1(3,2,3);
    Vektor v2(2,2,3);
    Vektor v3;
    v3 = v1 + v2;
    cout << v3;
    cout << (v1 < v2) << endl;
    v3 = v2;
    cout << v3;
    return 0;
}
