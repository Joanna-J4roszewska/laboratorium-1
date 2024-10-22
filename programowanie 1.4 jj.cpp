#include <iostream>

using namespace std;

int main()
{

	int a;
	int b;// trzy liczby wiec trzy mozliwosci
	int c;

	cout << "Podaj liczbe:"; 
	cin >> a; 
	cout << "Podaj kolejna liczbe:";
	cin >> b;
	cout << "Podaj ostatnia liczbe:";
	cin >> c;

	if (a > b && a > c) { //zastosowanie instrukcji warunkowych
		cout << b << " Jest najwieksza podana liczba,";
	}
	else if (b > a && b > c) { // && operator ktory szuka rozwiazania spelniajace jego warunki 
		cout << b << " Jest najwieksza podana liczba.";
	}
	else {
		cout << c << " Jest najwieksza podana liczba.";
		return 0;
	}

	

}


