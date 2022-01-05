#include "Klient.h"
#include <iostream>
#include <fstream>
#include <string>

Klient::Klient(string login, string haslo, string imie, string nazwisko, string dataUrodzenia, string pesel) {
	this->login = login;
	this->haslo = haslo;
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->dataUrodzenia = dataUrodzenia;
	this->pesel = pesel;

	//tworzenie pliku z danymi klineta
	ofstream klient;
	klient.open(login + ".txt");
	klient << login << endl << haslo << endl << imie << endl << nazwisko << endl << dataUrodzenia << endl << pesel;
	klient.close();
}

void Klient::usuniecieKonta()
{
	;
}

