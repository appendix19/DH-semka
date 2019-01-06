#pragma once
#include "Ucet.h"

class StudentskyUcet : public Ucet
{
private:
	string skola;
public:
	StudentskyUcet( Zakaznik paZakaznik, double paVstupnyVklad,string paSkola) {
		zostatok = paVstupnyVklad;
		majitelUctu = paZakaznik;
		urokovaSadzba = 3.1;
		rocnyPoplatok = 0.0;
		skola = paSkola;
	}
	~StudentskyUcet();
	void vypisUcet();
};
 
