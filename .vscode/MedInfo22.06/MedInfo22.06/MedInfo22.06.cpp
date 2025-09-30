#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	int n = 0, l = 0, lp = 0, ok = 0;
	char prefix[21], s[500], *p;

	cin >> n;
	strcpy(s, "");
	for (int i = 0; i <= n; i++) {
		cin.getline(prefix, 21);
		if (strlen(s) > 0)
			strcat(s, " ");
		strcat(s, prefix);
	}
	lp = strlen(prefix);
	p = strtok(s, " ");

	while (p != NULL) {
		l = strlen(p);
		if (l > lp && strncmp(p, prefix, lp) == 0) {
			cout << p << " ";
			ok = 1;
		}
		p = strtok(NULL, " ");
	}

	if (ok == 0)
		cout << "nu exista";

	return 0;
}
/*
Un cuvânt este prefix al unui alt cuvânt dacă se obține din acesta, prin eliminarea ultimelor sale litere.
Scrieți un program C/C++ care citește de la tastatură un număr natural n (n apartine [2,20]) și apoi n cuvinte
distincte, fiecare fiind format din cel mult 20 de caractere, numai litere mici ale alfabetului englez.
La introducerea datelor, după fiecare cuvânt se tastează Enter. Programul afișează pe
ecran, separate prin câte un spațiu, cuvintele care îl au drept prefix pe ultimul cuvânt citit.
Dacă nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista.

Exemplu: dacă n=6 și se citesc cuvintele alăturate, pe ecran se afișează
raita raid raion

raita
grai
raid
raion
straie
rai
*/
