#include <iostream>
#include "Klient.h"
#include <string>
#include <fstream>

using namespace std;

bool logowanie(string login, string haslo) //funkcja przyjmuje login i haslo podane przez klienta
{
	string pass, log; //dane klienta pobrane z pliku

	ifstream read(login + ".txt");
	getline(read, log);
	getline(read, pass);

	if (log == login && pass == haslo) //weryfikacja czy login i haslo podane przez uzytkownika sa poprawne
		return true;
	else
		return false;
}

int main()
{
	int wybor; //zmienna sluzaca do poruszania sie po menu
	int wyborLogowanie; //zmienna sluzaca do poruszania sie po menu po zalogowaniu
	string login, haslo, imie, nazwisko, dataUrodzenia, pesel;

	//menu
	for (;;)
	{
		cout << "_____BANK____" << endl;
		cout << "1. Zaloguj sie" << endl;
		cout << "2. Utworz konto" << endl;
		cout << "3. Wyjdz" << endl << endl;
		cout << "Wybierz operacje: ";
		cin >> wybor;
		cout << endl;

		if (wybor == 1) //logowanie
		{
			system("CLS");
			cout << "Podaj login: ";
			cin >> login;
			cout << endl;
			cout << "Podaj haslo: ";
			cin >> haslo;
			cout << endl;
			system("CLS");

			if (logowanie(login, haslo))
			{
				for (;;)
				{
					system("CLS");
					//menu po zalogowaniu
					cout << "_____BANK____" << endl;
					cout << "1. Sprawdz saldo" << endl;
					cout << "2. Wykonaj przelew" << endl;
					cout << "3. Wyloguj sie" << endl << endl;
					cout << "Wybierz operacje: ";
					cin >> wyborLogowanie;
					cout << endl;

					if (wyborLogowanie == 1) {
						;
					}
					else if (wyborLogowanie == 2)
					{
						;
					}
					else if (wyborLogowanie == 3)
					{
						system("CLS");
						break;
					}
				}
			}
			else
			{
				cout << "Podane dane nie sa poprawne" << endl;
			}
			
		}
		else if (wybor == 2)//tworzenie konta
		{
			system("CLS");
			cout << "Login: ";
			cin >> login;
			cout << endl;

			cout << "Haslo: ";
			cin >> haslo;
			cout << endl;

			cout << "Imie: ";
			cin >> imie; 
			cout << endl;

			cout << "Nazwisko: ";
			cin >> nazwisko;
			cout << endl;

			cout << "Pesel: ";
			cin >> pesel;
			cout << endl;

			cout << "Data urodzenia: " << endl;
			cin >> dataUrodzenia;
			cout << endl;

			Klient(login, haslo, imie, nazwisko, dataUrodzenia, pesel);
			system("CLS");
		}
		else if (wybor == 3)//wychodzenie
		{
			system("CLS");
			cout << "Do widzenia" << endl;
			break;
		}
		else
		{
			cout << "Podano bledna opcje" << endl;
			system("CLS");
		}

	}



}
