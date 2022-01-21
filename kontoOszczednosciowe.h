#ifndef KONTOOSZCZEDNOSCIOWE_H
#define KONTOOSZCZEDNOSCIOWE_H
#include "kontoFinansowe.h";

class kontoOszczednosciowe : kontoFinansowe {

private:
	float oprocentowanie;

public:
	kontoOszczednosciowe(float oprocentowanie);
	void naliczanieOprocentowania(int saldo);
};


#endif
