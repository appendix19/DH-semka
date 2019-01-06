#pragma once
#include "Ucet.h"
class Banka
{
private:
	unsigned int pocet = 0;
	Ucet* ucty;
	
public:
	Banka();
	
	bool pridajUcet(Ucet *ucet);
	void zoradPodlaZostatkuVzostupne();
	Ucet* getUcty();
	unsigned int getPocet() { return pocet; };
	//void zoradPodlaPriezviska();
	//void nacitajZTextaku(const char *subor);
	void zapisDoTextaku(const char *subor);
	void vypis(Ucet* ucet, int pocet);
	~Banka();
};

