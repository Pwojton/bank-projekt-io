#include <iostream>
using namespace std;


int main()
{
	int wybor; //zmienna sluzaca do poruszania sie po menu

	//menu
	for (;;)
	{
		cout << "____BANK____" << endl;
		cout << "1. Zaloguj sie" << endl;
		cout << "2. Utworz konto" << endl;
		cout << "3. Wyjdz" << endl << endl;
		cout << "Wybierz operacje: ";
		cin >> wybor;
		cout << endl;

		if (wybor == 1) //logowanie
		{
			system("CLS");
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
