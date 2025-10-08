#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main() {
	int l = 0, ok = 0;
	char c[101], * p, rez[500];
	cin.getline(c, 101);
	strcpy(rez, "");

	p = strtok(c, " ");
	while (p != NULL) {
		l = strlen(p);

		if (p[0] == '-') {
			if (strlen(rez) > 0)
				strcat(rez, " ");
			strcat(rez, p + 1);
		}
		else {
			if (strlen(rez) > 0)
				strcat(rez, " ");
			strcat(rez, p);
		}

		p = strtok(NULL, " ");
	}

	cout << rez;

	return 0;
}
/* TEST 14
Un text are cel mult 100 de caractere și este format din cuvinte și numere, separate prin câte un spațiu.
Cuvintele sunt formate numai din litere ale alfabetului englez. Toate numerele sunt reale și sunt formate
numai din parte întreagă sau din parte întreagă și parte fracționară, separate prin virgulă (,), numerele
negative fiind precedate de semnul minus (-). Cel puțin unul dintre numerele reale este negativ. Scrieți
un program C/C++ care citește de la tastatură textul, pe care îl transformă în memorie, înlocuind fiecare
număr negativ cu valoarea sa absolută. Programul afișează apoi pe ecran textul obținut.
Exemplu: pentru textul Modul de -3,24 este 3,24 si modul de -15 este 15
se va afișa pe ecran textul: Modul de 3,24 este 3,24 si modul de 15 este 15
*/
