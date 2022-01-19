#include "Klient.h"
#include "kontoFinansowe.h"
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

void Klient::zalozenieKonta(kontoFinansowe* numer_konta) {
	long int nrKonta;
	float saldo = 0;
	cout << "Uruchomiony zostal proces zakladania konta." << endl;
	//system("cls");
	cout << "Wpisz nr zalozonego konta finansowego: " << endl;
	cin >> nrKonta;
	system("cls");
	cout << "Wpisz ilosc pieniedzy wlozonej do konta przy zalozeniu: " << endl;
	cin >> saldo;

	numer_konta = new kontoFinansowe(nrKonta, saldo);
	ofstream konto;
	std::string nrkonta = std::to_string(nrKonta);
	konto.open(nrkonta + ".txt");
	konto << nrKonta << endl << saldo << endl;
	konto.close();
}

void Klient::usuniecieKonta(kontoFinansowe* numer_konta) {
	delete numer_konta;
}

