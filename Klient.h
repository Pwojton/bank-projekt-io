#include <iostream>

using namespace std;

class Klient
{
private:
	string imie, nazwisko, login, haslo;
	string pesel;
	string dataUrodzenia;

public:
	Klient(string login, string haslo, string imie, string nazwisko, string dataUrodzenia, string pesel);
	void usuniecieKonta();

};

