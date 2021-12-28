#include "Klient.h"
#include <fstream>

Klient::Klient(string login, string haslo, string imie, string nazwisko, string dataUrodzenia, string pesel) {
	this->login = login;
	this->haslo = haslo;
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->dataUrodzenia = dataUrodzenia;
	this->pesel = pesel;

	ofstream klient;
	klient.open(login + ".txt");
	klient << login << endl << haslo << endl << imie << endl << nazwisko << endl << dataUrodzenia << endl << pesel;
	klient.close();
}

void Klient::usuniecieKonta()
{
	;
}