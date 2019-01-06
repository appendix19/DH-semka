#include "Ucet.h"
#include <iostream>
using namespace std;

Ucet::~Ucet()
{
}

void Ucet::vypisUcet()
{
	cout << "Majitel uctu: " << majitelUctu.getMeno() << " "
		<< majitelUctu.getPriezvisko() << "Pohlavie: " << majitelUctu.getPohlavie() <<"\n"
		<< "Urokova sazdba: " << urokovaSadzba <<"\n"<<"Rocny poplatok: "<< rocnyPoplatok << "\n"
		<<"Zostatok: " << zostatok;
}

string Ucet::vlozPeniaze(double suma)
{
	string vysledok;
	if (suma > 0) {
		vysledok = "Peniaze uspesne vlozene.";
		cout << "Na ucet ste vlozili " << suma << "€\n" <<
			"Novy zostatok na ucte: " << zostatok << "€\n";
	}
	else {
		vysledok = "Peniaze neboli vlozene. Vkladana suma nesmie byt zaporna ani nulova.";
	}
	return vysledok;
}

string Ucet::vyberPeniaze(double suma)
{
	string vysledok;

	if (suma > 0 && suma <= zostatok) {
		zostatok -= suma;
		vysledok = "Peniaze boli vybrane ";
		cout << vysledok;
		cout <<"Novy zostatok na ucte: " << zostatok << "€.";
	}
	else {
		if (suma <= 0) {
			vysledok = "Peniaze neboli vybrane.Zadana suma nesmie byt zaporna ani nulova";
		}
		else {
			vysledok = "Nedostatok penazi";
		}
		cout << vysledok;
	}
	return vysledok;
}

bool Ucet::setUrokovuSadzbu(double sadzba)
{
	if (sadzba >= 0) {  
		urokovaSadzba = sadzba;
		cout << "Zmenene.";
		return 1;
	}
	else {
		cout << "Nezmenene";
		return 0;
	}
}
bool Ucet::setRocnyPoplatok(double poplatok) {			//& ???
	if (poplatok < 0) {
		rocnyPoplatok = poplatok;
		return 1;
	}
	else {
		cout << "Nezmenene";
		return 0;
	}
}

