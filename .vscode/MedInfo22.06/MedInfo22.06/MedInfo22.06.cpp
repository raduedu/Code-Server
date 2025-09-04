/*
Fişierul bac.in conține un șir de cel mult 106 numere întregi din intervalul [-109,109], separate prin câte un spațiu. Cel puțin un număr din şir este pozitiv.
Se cere să se afișeze pe ecran lungimea maximă a unei secvențe a şirului care fie începe, fie se încheie cu un număr pozitiv. O secvență este formată din termeni aflați pe poziții consecutive în şir, iar lungimea secvenței este egală cu numărul de termeni ai acesteia. Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele -15 -7 4 -7 21 -5 -200 -26 52 -24 -7 -9 -20
pe ecran se afişează 11 (corespunzător secvenței 4 -7 21 -5 -200 -26 52 -24 -7 -9 -20).
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("bac.in");
	int nr, pp = -1, pn = 0, up = -1, un = 0, k = 0; //pozitii: px = primul x; ux = ultimul x; xp = al x-lea pozitiv; xn = al x-lea negativ. 
	while (fin >> nr) {
		k++;
		if (nr >= 0 && pp == -1)
			pp = k;
		if (nr < 0 && pn == 0)
			pn = k;
		if (nr >= 0)
			up = k;
		if (nr < 0)
			un = k;
	} 
	//k = k - 1; //pastram variabila care ne spune cate elemente sunt in total in vector (nvm, nu mai avem vector)


	
	//cout << "\nprima val poz este pe pozitia: " << pp << endl;
	//cout << "prima val NEGATIVA este pe pozitia: " << pn << endl;
	//cout << "ULTIMA val poz este pe pozitia: " << up << endl;
	//cout << "ULTIMA val NEGATIVA este pe pozitia: " << un << endl;
	
	// ^- cu asta putem afisa chestii random useful ig

	if ((up - pn) + 1 >= (un - pp) + 1)
		cout << (up - pn) + 1;// << " [pn, up]";
	else cout << (un - pp) + 1;// << " [pp, un]";
	cout << " este lungimea maxima"; //cand am facut parea mai eficient pentru program, dupa putina analiza pot spune ca este mai eficient doar pentru cel care scrie programul, pentru a nu scrie acelasi lucru de 2 ori "in programare, daca scrii acelasi lucru de 2 ori faci ceva gresit"

	fin.close();
	return 0;
}

/*
Programul este eficient din punct de vedere al memoriei, deoarece retine doar ultima pozitie cautata din tabloul unidimensional si pozitia elementelor cautate, acestea fiind primul numar pozitiv, primul numar negativ, ultimul numar pozitiv si ultimul numar negativ.
Programul este eficient din punct de vedere al timpului de executie, deoarece elementele sirului sunt parcurse o singura data.

Programul verifica numerele din vector si vede daca indeplinesc conditiile pentru a fi unul dintre cele 4 numere cautate, acestea fiind primul numar pozitiv, primul numar negativ, ultimul numar pozitiv si ultimul numar negativ, daca da, le este stocata pozitia. Apoi, se scad pozitia ultimului numar pozitiv si pozitia primului numar negativ, cat si pozitia ultimului numar negativ si cea a primului numar pozitiv pentru a determina dimensiunile fiecarui sir. Dupa ce programul determina lungimile cautate, le comapara si ne afiseaza lungimea maxima cautata.
*/