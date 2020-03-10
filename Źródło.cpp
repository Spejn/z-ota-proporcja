//Z³ota proporcja 2.1

#include <iostream>
#include <conio.h>
using namespace std;

const float fi = 1.618;
double nLiczbaAB;

void main()
{
	cout << "Obliczanie zlotej proporcji" << endl;
	cout << "wpisz 0 aby zakonczyc program" << endl << endl;
	cout << "Podaj liczbe: ";
	cin >> nLiczbaAB;
	while (nLiczbaAB !=0)
	{
	
		double nWynik = nLiczbaAB / fi;


		double nLiczbaA = nWynik;
		(nLiczbaAB != 0);
		
		double nLiczbaB = nLiczbaAB - nLiczbaA;
		cout << "a" << "=" << nLiczbaA << "  b" << "=" << nLiczbaB << endl << endl;
		cout << "Podaj liczbe: ";
		cin >> nLiczbaAB;
	} 
	cout << "nacisnij dowolny przycisk";

	_getch();


}