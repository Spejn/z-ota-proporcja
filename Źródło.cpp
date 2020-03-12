//Z³ota proporcja 2.1

#include <iostream>
using namespace std;

const float fi = 1.618;
double nLiczbaAB;

int main()
{
	cout << "Obliczanie zlotej proporcji" << endl;
	cout << "wpisz 0 aby zakonczyc program" << endl << endl;
	cout << "Podaj liczbe: ";
	cin >> nLiczbaAB;

	while (nLiczbaAB !=0)
	{
		

		double long nWynik = nLiczbaAB / fi;

		double long nLiczbaA = nWynik;
		(nLiczbaAB != 0);
		
		double long nLiczbaB = nLiczbaAB - nLiczbaA;
		cout << "a" << "=" << nLiczbaA << "  b" << "=" << nLiczbaB << endl << endl;
		cout << "Podaj liczbe: ";
		cin >> nLiczbaAB;
	} 
	cout << "nacisnij dowolny przycisk";

	return 0;

}