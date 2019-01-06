#pragma once
#include "Zakaznik.h"

class Ucet
{
protected:
	double zostatok;
	double urokovaSadzba;
	Zakaznik majitelUctu;
	double rocnyPoplatok;
public:

	Ucet(Zakaznik paZakaznik,double paVstupnyVklad) {
		zostatok = paVstupnyVklad; 
		majitelUctu = paZakaznik; 
		urokovaSadzba = 3.1;
		rocnyPoplatok = 0;
	}
	
	Ucet();

	~Ucet();
	double getZostatok() { return zostatok; };
	virtual void vypisUcet(); //virtual staci napisat len tu?
	string vlozPeniaze(double suma);
	string vyberPeniaze(double suma);
	bool setUrokovuSadzbu(double sadzba);
	bool setRocnyPoplatok(double poplatok);


};

