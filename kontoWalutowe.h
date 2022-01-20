#ifndef KONTOWALUTOWE_H
#define KONTOWALUTOWE_H
#include "kontoFinansowe.h";

class kontoWalutowe : kontoFinansowe {

private:
	int waluta;
	int kursWalut;
public:
	kontoWalutowe(int waluta, int kursWalut);
	void przewalutowanie(int saldoWalutowe);
};

#endif
