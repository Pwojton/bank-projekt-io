#include "kontoOszczednosciowe.h"
#include <iostream>

using namespace std;

kontoOszczednosciowe::kontoOszczednosciowe(float oprocentowanie):kontoFinansowe(123456789, 0)
{
	this->oprocentowanie = oprocentowanie;
};

void kontoOszczednosciowe::naliczanieOprocentowania(int saldo)
{
	int wyborKontoOszczednosciowe;

	system("CLS");
	cout << "____Konto Oszczednosciowe___" << endl;
	cout << "1. Sprawdz odsetki " << endl;
	cout << "2. Wroc " << endl;
	cout << "Wybierz operacje: ";
	cin >> wyborKontoOszczednosciowe;
	system("CLS");

	if (wyborKontoOszczednosciowe == 1) {

		float oprocentowanie = 0.025; // % = 2.5
		int dni;
		cout << "Ile dni minelo od zalozenia konta: ";
		cin >> dni;
		cout << endl;

		float odsetki = saldo * dni * oprocentowanie / 365;

		cout << "Odsetki wynosza: " << odsetki << " PLN ";
		cout << endl << "Srodki na koncie oszczednosciowym: " << odsetki + saldo << " PLN " << endl;

		system("pause");
	}

	else if (wyborKontoOszczednosciowe == 2) {
	;
	}

	else{
		cout << "Podane dane nie sa poprawne" << endl;
	}
}