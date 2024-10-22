#include <iostream>

using namespace std;

int main()
{
    int a; //przechowuje wartosci liczbowe calkowite z pewnego zakresu a

    cout << "Podaj liczbe calkowita:"; //output wyswietla dane wyjsciowe na ekranie

    cin >> a; //input umozliwia odczyt danych wpisanych z klawiatury

    if (a > 0)
        cout << "Liczba calkowita jest dodatnia";
    else if (a == 0) //operator rownosci
        cout << "Liczba calkowita jest rowna zero";
    else
        cout << "Liczba calkowita jest ujemna";

    return 0;
}

