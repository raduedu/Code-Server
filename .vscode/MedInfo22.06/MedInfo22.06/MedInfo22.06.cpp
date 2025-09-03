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
/*
Programul este eficient din punct de vedere al memoriei, deoarece nu retine toate numerele din sir, ci doar cele cu 2 cifre.
Programul este eficient din punct de vedere al timpului de executie, deoarece elementele din sirul initial sunt parcurse o 
singura data.

Programul retine intr-un vector de frecventa elementele de 2 cifre, care este apoi parcurs si sunt determinate cele mai mari doua 
numere care indeplinesc conditiile din enunt. De asemenea, am luat in calcul cazul in care nu exista cel putin doua numere care nu
indeplinesc conditia.
*/