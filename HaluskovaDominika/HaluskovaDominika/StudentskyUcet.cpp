#include "StudentskyUcet.h"
#include <iostream>
using namespace std;


StudentskyUcet::~StudentskyUcet()
{
}

void StudentskyUcet::vypisUcet() {
	cout << "Majitel uctu: " << majitelUctu.getMeno() << " "
		<< majitelUctu.getPriezvisko() << "Pohlavie: " << majitelUctu.getPohlavie() << "\n"
		<< "Urokova sazdba: " << urokovaSadzba << "\n" <<"Rocny poplatok: "<< rocnyPoplatok << "\n"
		<< "Zostatok: " << zostatok << "\n" <<skola;
}
