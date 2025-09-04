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

int v[1000000];

int main() {
	ifstream fin("bac.in");
	int nr, pp = -1, pn = 0, up = -1, un = 0, k = 1; //pozitii: px = primul x; ux = ultimul x; xp = al x-lea pozitiv; xn = al x-lea negativ. 
	while (fin >> nr) {
		v[k] = nr;
		k++;
	} k = k - 1; //bagam toate elementele in vector si pastram variabila care ne spune cate elemente sunt in total in vector

	//for (int i = 1; i <= k; i++)
	//	cout << v[i] << " "; //afisam valorile din vector

	for (int i = 1; i <= k; i++) {
		if (v[i] >= 0 && pp == -1)
			pp = i;
		if (v[i] < 0 && pn == 0)
			pn = i;
		if (pp != -1 && pn != 0)
			i = k+1;
	}
	//cout << "\nprima val poz este pe pozitia: " << pp << endl;
	//cout << "prima val NEGATIVA este pe pozitia: " << pn << endl;
	for (int i = k; i >= 1; i--) {
		if (v[i] >= 0 && up == -1)
			up = i;
		if (v[i] < 0 && un == 0)
			un = i;
		if (up != -1 && un != 0)
			i = 0;
	}
	//cout << "ULTIMA val poz este pe pozitia: " << up << endl;
	//cout << "ULTIMA val NEGATIVA este pe pozitia: " << un << endl;
	if ((up - pn) + 1 >= (un - pp) + 1)
		cout << (up - pn) + 1 << " [pn, up]";
	else cout << (un - pp) + 1 << " [pp, un]";
	cout << " este lungimea maxima";


	fin.close();
	return 0;
}

/*
Programul este eficient din punct de vedere al memoriei, deoarece retine doar elementele din tabloul unidimensional si pe cele absolut necesare (primul/ultimul pozitiv/negativ + un contor pentru a stii cate elemente sunt in tablou)
Programul este eficient din punct de vedere al timpului de executie, deoarece elementele sirului sunt complet parcurse o singura data, 
*/