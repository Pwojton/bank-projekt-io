#include "kontoWalutowe.h"
#include <iostream>
using namespace std;
int wyborKontoWalutowe; //zmienna sluzaca do wyboru przy koncie walutowym
int waluta; //zmienna do przewalutowania

kontoWalutowe::kontoWalutowe(int waluta, int kursWalut):kontoFinansowe(123456789,0)
{
	this->waluta = waluta;
	this->kursWalut = kursWalut;
};

void kontoWalutowe::przewalutowanie(int saldoWalutowe)
{
	system("CLS");
	cout << "_____Konto finansowe____" << endl;
	cout << "1. Przewalutuj pieniadze" << endl;
	cout << "2. Wroc" << endl;
	cout << "Wybierz operacje: ";
	cin >> wyborKontoWalutowe;
	system("CLS");
	if (wyborKontoWalutowe == 1)
	{
		cout << "Na jaka walute chcesz przewalutowac pieniadze?" << endl;
		cout << "1. Euro (4,52 zl)" << endl;
		cout << "2. Dolar (3,98 zl)" << endl;
		cout << "3. Funt (5,42 zl)" << endl;
		cout << "4. Szwedzka korona (0,44 zl)" << endl;
		cout << "5. Frank (4,34 zl)" << endl;
		cout << "Wybierz operacje: ";
		cin >> waluta;
		system("CLS");
		if (waluta == 1)
		{
			system("CLS");
			double liczba_euro = saldoWalutowe / 4.52;
			cout << "Stan twojego salda po przewalutowaniu wynosi " << liczba_euro << " euro";
			cout << endl;
			system("pause");
		}
		else if (waluta == 2)
		{
			system("CLS");
			double liczba_dolarow = saldoWalutowe / 3.98;
			cout << "Stan twojego salda po przewalutowaniu 1000 zl wynosi " << liczba_dolarow << " dolarow";
			cout << endl;
			system("pause");
		}
		else if (waluta == 3)
		{
			system("CLS");
			double liczba_funtow = saldoWalutowe / 5.42;
			cout << "Stan twojego salda po przewalutowaniu 1000 zl wynosi " << liczba_funtow << " funtow";
			cout << endl;
			system("pause");
		}
		else if (waluta == 4)
		{
			system("CLS");
			double liczba_koron = saldoWalutowe / 0.44;
			cout << "Stan twojego salda po przewalutowaniu 1000 zl wynosi " << liczba_koron << " koron";
			cout << endl;
			system("pause");
		}
		else if (waluta == 5)
		{
			system("CLS");
			double liczba_frankow = saldoWalutowe / 4.34;
			cout << "Stan twojego salda po przewalutowaniu 1000 zl wynosi " << liczba_frankow << " koron";
			cout << endl;
			system("pause");
		}
	}
	else if (wyborKontoWalutowe == 2)
	{
		return;
	}

	cout << endl;
}