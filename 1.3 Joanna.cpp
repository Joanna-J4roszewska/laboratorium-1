#include <iostream>

using namespace std;

int main()
{
    int a; //przechowuje wartosci liczbowe calkowite z pewnego zakresu 

    cout << "Podaj liczbe calkowita:"; //output wyswietla dane wyjsciowe na ekranie

    cin >> a; //input umozliwia odczyt danych wpisanych z klawiatury

    if (a % 2 != 0) { // != nie równe, tez musimy podzielic na 2 by miec pewnosc ze bedzie parzysta 

        cout << "Liczba calkowita jest nieparzysta.";
    }
    else if (a == 0) // == porownuje 
    {
        cout << "Liczba calkowita jest rowna zero.";
    }

    else {

        cout << "Liczba calkowita jest parzysta.";
    }


    return 0;
}