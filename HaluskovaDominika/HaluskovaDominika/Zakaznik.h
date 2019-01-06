#pragma once

#include <string>
using std::string;
class Zakaznik
{

private:
	string meno;
	string priezvisko;
	char pohlavie;
public:
	Zakaznik(string aMeno, string aPriezvisko, char aPohlavie) {
		meno = aMeno;
		priezvisko = aPriezvisko;
		pohlavie = aPohlavie;
	}
	Zakaznik() {};
	~Zakaznik();
	string getMeno() { return meno; };
	string getPriezvisko() { return priezvisko; };
	char getPohlavie() { return pohlavie; };
};

