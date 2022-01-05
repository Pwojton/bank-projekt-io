#ifndef KONTOWALUTOWE_H
#define KONTOWALUTOWE_H
#include "kontoFinansowe.h";

class kontoWalutowe : kontoFinansowe {

private:
	int waluta;
	int kursWalut;

public:
	void przewalutowanie();
};

#endif
