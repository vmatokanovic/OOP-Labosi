#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename Tip>
void sort(Tip array[], int SIZE){
    for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (array[i] > array[j])
			{
				Tip temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

template <typename Tip>
void print(Tip array[], int SIZE){
    for (int i=0;i<SIZE;i++)
    {
        cout << array[i]<<"\n";
    }
}


int main()
{
    srand((unsigned int)time(NULL));
    float a = 5.0;
    int n; // Parametar za duljinu polja.
    cout << "Unesite broj elemenata za polja: ";
    cin >> n;
    int *p_int = new int [n];
    double *p_double = new double [n];
    char *p_char = new char [n];
    //Popunjavanje int polja:
    for(int i=0;i<n;i++)
    {
        p_int[i] = rand() % 10;
    }
    cout << "Int polje:" <<"\n";
    print(p_int, n);
    sort(p_int, n);
    cout << "Int polje nakon sortiranja:" <<"\n";
    print(p_int, n);

    //Popunjavanje double polja:
    for(int i=0;i<n;i++)
    {
        p_double[i] = float(rand())/float((RAND_MAX)) * a;
    }
    cout << "Double polje:" <<"\n";
    print(p_double, n);
    sort(p_double, n);
    cout << "Double polje nakon sortiranja:" <<"\n";
    print(p_double, n);

    //Popunjavanje char polja:
    for(int i=0;i<n;i++)
    {
        p_char[i] = (rand() % 26) + 'A';
    }
    cout << "Char polje:" <<"\n";
    print(p_char, n);
    sort(p_char, n);
    cout << "Char polje sortirano:" <<"\n";
    print(p_char, n);

    delete [] p_int;
    delete [] p_double;
    delete [] p_char;

    return 0;
}
