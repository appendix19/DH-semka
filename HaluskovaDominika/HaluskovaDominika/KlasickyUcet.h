#pragma once
#include "Ucet.h"
class KlasickyUcet : public Ucet
{
public:
	KlasickyUcet(Zakaznik paZakaznik, double paVstupnyVklad) {
		zostatok = paVstupnyVklad;
		majitelUctu = paZakaznik;
		urokovaSadzba = 3.1;
		rocnyPoplatok = 7.0;

	};
	~KlasickyUcet();
};

