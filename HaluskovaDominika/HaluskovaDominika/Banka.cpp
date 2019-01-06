#include "Banka.h"
#include <iostream>
#include <fstream>
using namespace std;


void Banka::vypis(Ucet * ucet, int pocet)
{
	if (pocet == 0) {
		cout << "Ziadne ucty v banke." << endl;
	}
	else {
		for (int i = 0; i < pocet; i++)
		{

			Ucet *ucet = &ucty[i];
			ucet->vypisUcet(); //??? *&

		}
	}
}

Banka::Banka()
{
}

Ucet* Banka::getUcty() {
	return ucty;
}
bool Banka::pridajUcet(Ucet *ucet) {
	if (!ucet || !ucty) {
		return 0;
	}
	if (pocet != 0) {
		Ucet *novy = new Ucet[pocet + 1];
		for (unsigned int i = 0; i < pocet; i++) {
			novy[i] = ucty[i];
		}
		novy[pocet + 1] = *ucet;
		delete[] ucty;
		Ucet *ucty = new Ucet[pocet + 1];
		ucty = novy;
		
	}
	else {
		ucty = new Ucet[1];
		ucty[0] = *ucet;
		
	}
	pocet++;
	return 1;
}

void Banka::zoradPodlaZostatkuVzostupne()
{
	

		cout << "Ucty po zoradeni zostatkov vzostupne" << endl;
		if (pocet != 0) {
			for (int j = 0; j < pocet; j++) {


				for (int i = 0; i < pocet - 1; i++)
				{
					double prvy = ucty[i].getZostatok();
					double druhy = ucty[i + 1].getZostatok();
					if (prvy > druhy)
					{
						iter_swap(ucty[i], ucty[i + 1]);    // *??
					}
				}
			}
		}
		

		this->vypis(ucty,pocet);
}

/*void Banka::zoradPodlaPriezviska()
{
	
}
*/

void Banka::zapisDoTextaku(const char * subor)
{
	
	ofstream zapisovac;
	zapisovac.open(subor);
	zapisovac << "ucty:" << endl;
	for (int i = 0; i < pocet; i++) {
		Ucet ucet = ucty[i];
		ucet.vypisUcet();
	}
	if (zapisovac.is_open()) zapisovac.close();
}

Banka::~Banka()
{
	
}
