#include "Main.h"
#include "Zakaznik.h"
#include "Ucet.h"
#include "KlasickyUcet.h"
#include "StudentskyUcet.h"
#include "Banka.h"
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

/*
Dominika Halúsková
5ZY022

Zadanie práce - cca 10 - 15 riadkov
*/

Main::Main()
{
}

//extern a konstanty??

Main::~Main()
{
}

int Main() {
	/*const int N = 2;                               

	Ucet* ucty = new Ucet[N];             

	Zakaznik* prvy = new Zakaznik("domi","halus",'Z');
	KlasickyUcet* ucet1 = new KlasickyUcet(100.0,*prvy);
	ucty[0]= *ucet1;
	*/
	
	
	int volba;
	bool pokracuje = true;

	while (pokracuje != false) {
		Banka banka	;
		Ucet* ucty;   
		cout << "*******************************\n";
		cout << " 1 - Vytvor novy ucet.\n";
		cout << " 2 - Vypis vsetky ucty na konzolu.\n";
		cout << " 3 - Zorad podla zostatku vzostupne a vypis na konzolu.\n";
		cout << " 4 - Zapis do suboru.\n";
		cout << " 0 - Exit.\n";
		cout << " Vloz znak reprezentujuci tvoju volbu: \n\n";

		cin >> volba;
		cout << endl;

		unsigned int pocet;

		switch (volba) {


		case '1': {
			cout << "Vytvor novy ucet.\n";
			string meno; //nevymazat este??
			string priezvisko;
			char pohlavie;
			double vklad;
			cout << "Meno zakaznika:";
			getline(cin, meno);
			cout << "Priezvisko zakaznika:";
			getline(cin, priezvisko);
			cout << "Pohlavie: zena: Z , muz: M , pouzi velke pismena.";
			cin >> pohlavie;
			while ((pohlavie != 'Z') || (pohlavie != 'M')) {
				cout << "Zle zadane. Zadaj M alebo Z";
				cin >> pohlavie;
			}
			cout << "Vklad: ";
			cin >> vklad;
			while (vklad < 0) {
				cout << "Zle zadane. Zadaj nezaporne cislo.";
				cin >> vklad;
			}
			Zakaznik*zakaznik = new Zakaznik(meno, priezvisko, pohlavie);
			Ucet *ucet = new Ucet (*zakaznik, vklad);
			banka.pridajUcet(ucet);

		}
		
			
		
		break;

		case '2':			
			cout << "Vypis vsetky ucty na konzolu.\n";
			pocet = banka.getPocet();
			if (pocet == 0) {
				cout << "Ziaden ucet.\n";
			}
			banka.vypis (ucty, pocet);
			break;
		
	case '3':
	{
		cout << "Zorad podla zostatku vzostupne a vypis na konzolu.\n";
		banka.zoradPodlaZostatkuVzostupne();
		break;
	}
		
	/*
	case '4':
		if (mojiPretekari.empty()) {
			cout << "Na pretek nebol zaregistrovany ziadny pretekar\n";
			continue;
		}
		if (!pretekaloSa) {
			cout << "Pretek sa este neuskutocnil.\n";
			continue;
		}
		if (writeVectorToFile(mojiPretekari))
			cout << "Vyskytla sa chyba pri ukladani pretekarov\n";
		break;
	case '5':
		if (mojiPretekari.empty()) {
			cout << "Na pretek nebol zaregistrovany ziadny pretekar\n";
			continue;
		}
		cout << "+++++++++++++++++++++++++++++\n";
		sortVectorByName(mojiPretekari);
		break;
*/
		case '0':
		
			cout << "Koniec Programu.\n";
			pokracuje = false;
		
		break;

		default:
		
			cout << "\nNeplatna volba. \n";
			cout << "skus znova.\n";
		
		break;




		}
	}
	return 0;
}