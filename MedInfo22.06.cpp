#include <iostream>
#include <fstream>
using namespace std;

int v[1001];

int main() {
	ifstream fin("bac.in");
	int n, ok = 1;

	while (fin >> n)
		v[n]++;

	for (int i = 1; i <= 1000 && ok == 1; i++)
		if (v[i] > 0)
			if (v[i] > i || v[i] % 2 != i % 2)
				ok = 0;

	if (ok == 1)
		cout << "DA";
	else
		cout << "NU";

	fin.close();
	return 0;
}

/*
Programul citeste fiecare numar din fisier si incrementeaza vectorul de frecventa. 
Apoi parcurge vectorul de frecventa si verifica pentru fiecare valoare care apare daca numarul de aparitii este 
mai mare decat valoarea sau daca au paritati diferite. Daca gaseste o astfel de valoare, seteaza ok = 0. La final afiseaza DA daca ok = 1, altfel NU.

Programul este eficient din punct de vedere al memoriei, deoarece foloseste un vector de frecventa.

Programul este eficient din punct de vedere al timpului de executie, deoarece parcurge fisierul o singura data si verifica vectorul de frecventa. 
Complexitatea totala este minima, fiind algoritm liniar.
*/