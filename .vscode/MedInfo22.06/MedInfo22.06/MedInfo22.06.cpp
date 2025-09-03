/*
Fişierul bac.in conține cel mult 106 numere naturale din intervalul [0,109], separate prin câte un spațiu. Se cere să se afișeze pe ecran, în ordine descrescătoare, cele mai mari două numere de două cifre distincte care NU se află în fişier. Numerele afişate sunt separate printr-un spațiu, iar dacă nu există două astfel de numere, se afişează pe ecran mesajul nu exista. Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fişierul bac. in conține numerele 12 235 123 67 98 6 96 94 123 67 98 100
se afişează pe ecran, în această ordine, numerele 97 95.
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/
#include <iostream>
#include <fstream>
using namespace std;

int v[100];

int main() {
	ifstream fin("bac.in");
	int nr, a = 0, b = 0;

	while (fin >> nr) {
		if (nr >= 10 && nr <= 99)
			v[nr]++;
	}
	for (int i = 98; i >= 10; i--) {
		if (v[i] == 0 && i % 11 != 0) {
			if (a == 0)
				a = i;
			else {
				b = i;
				i = 9;
			}
		}
	}
	if (a * b == 0)
		cout << "Nu exista";
	else
		cout << a << " " << b;

	fin.close();

	return 0;
}
/*a)
Programul este eficient din punct de vedere al memoriei, deoarece nu retine toate numerele din sir, ci doar cele cu 2 cifre.
Programul este eficient din punct de vedere al timpului de executie, deoarece elementele din sirul initial sunt parcurse o 
singura data.

Programul retine intr-un vector de frecventa elementele de 2 cifre, care este apoi parcurs si sunt determinate cele mai mari doua 
numere care indeplinesc conditiile din enunt. De asemenea, am luat in calcul cazul in care nu exista cel putin doua numere care nu
indeplinesc conditia.
*/