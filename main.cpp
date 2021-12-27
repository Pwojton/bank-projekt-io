#include <iostream>
using namespace std;


int main()
{
	int wybor; //zmienna sluzaca do poruszania sie po menu
	int wyborLogowanie; //zmienna sluzaca do poruszania sie po menu po zalogowaniu
	string login, haslo;

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
			cout << "Podaj login: " << endl;
			cin >> login;
			cout << "Podaj haslo: " << endl;
			cin >> haslo;

			//menu po zalogowaniu
			for (;;)
			{
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
		else if (wybor == 2)//tworzenie konta
		{
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
