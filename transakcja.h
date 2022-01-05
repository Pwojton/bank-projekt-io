#ifndef TRANSAKCJA_H
#define TRANSAKCJA_H


class Transakcja {

private:
	long int nrKontaAdresata;
	long int NrKontaOdbiorcy;
	int typTransakcji;
	//date dataWykonania;
	int kwotaTransakcji;

public:
	int typTransakcja();

	bool Autoryzacja();

	void wyswietlTransakcje();
};

#endif
