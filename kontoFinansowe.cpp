#include "kontoFinansowe.h"
#include <iostream>

kontoFinansowe::kontoFinansowe(long int nrKonta, float saldo) {
	this->nrKonta = nrKonta;
	this->saldo = saldo;
}

float kontoFinansowe::sprawdzSaldo() {
	return saldo;
}

long int kontoFinansowe::sprawdzNrKonta() {
	return nrKonta;
}

void kontoFinansowe::wykonajPrzelew(kontoFinansowe numerKonta, float ilosc_mamony) {
	if (sprawdzSaldo() - ilosc_mamony < 0)
		std::cout << "Nie posiadasz tyle pieniedzy na koncie!" << std::endl;
	else {
		numerKonta.dodajMamone(ilosc_mamony);
		saldo -= ilosc_mamony;
		std::cout << "Wykonano przelew na numer Konta Bankowego " << numerKonta.sprawdzNrKonta() << "w iloœci pieniedzy " << ilosc_mamony << std::endl;
	}
}

void kontoFinansowe::przegladajHistorieTransakcji() {
	// TODO - implement kontoFinansowe::przegladajHistorieTransakcji
	throw "Not yet implemented";
}

void kontoFinansowe::wyswietlSaldo() {
	std::cout << "Twoje saldo wynosi " << saldo << "PLN" << std::endl;
}

void kontoFinansowe::dodajMamone(float ilosc_mamony) {
	saldo += ilosc_mamony;
}
