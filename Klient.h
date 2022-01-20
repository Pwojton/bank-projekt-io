#include <iostream>
#include "kontoFinansowe.h"

using namespace std;

class Klient
{
private:
	string imie, nazwisko, login, haslo;
	string pesel;
	string dataUrodzenia;
	kontoFinansowe* numer_konta = NULL;

public:
	Klient(string login, string haslo, string imie, string nazwisko, string dataUrodzenia, string pesel);
	void zalozenieKonta(kontoFinansowe* numer_konta);
	void usuniecieKonta();
};

