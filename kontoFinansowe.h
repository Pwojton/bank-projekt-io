#ifndef KONTOFINANSOWE_H
#define KONTOFINANSOWE_H

class kontoFinansowe {

private:
	long int nrKonta;
	float saldo;

public:
	kontoFinansowe(long int nrKonta, float saldo);
	long int sprawdzNrKonta();
	float sprawdzSaldo();
	void wykonajPrzelew(kontoFinansowe numerKonta, float iloscMamony);
	void przegladajHistorieTransakcji();
	void wyswietlSaldo();
	void dodajMamone(float iloscMamony);
};

#endif
