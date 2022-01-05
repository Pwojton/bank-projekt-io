#ifndef KONTOFINANSOWE_H
#define KONTOFINANSOWE_H

class kontoFinansowe {

private:
	long int nrKonta;
	float saldo;

public:
	void sprawdzSaldo();

	void wykonajPrzelew();

	void przegladajHistorieTransakcji();

	void wyswietlSaldo();
};

#endif
