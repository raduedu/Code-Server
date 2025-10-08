#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main() {
	int l = 0, cnt = 0, ok = 0;
	char c[101], * p, voc[6], vocdist[6];
	cin.getline(c, 101);

	strcpy(voc, "aeiou");

	p = strtok(c, " ");
	while (p != NULL) {
		l = strlen(p);
		strcpy(vocdist, "");

		for (int i = 0; i < l; i++) {
			if (strchr(voc, p[i]) != NULL) {
				if (strchr(vocdist, p[i]) == NULL) {
					char temp[2] = { p[i], '\0' };
					strcat(vocdist, temp);
				}
			}
		}

		if (strlen(vocdist) == 1) {
			cout << p << endl;
			ok = 1;
		}

		p = strtok(NULL, " ");
	}

	if (ok == 0)
		cout << "nu exista";

	return 0;
}
/* TEST 09 - 2021
Într-un text cu cel mult 102 caractere, cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat și
afișează pe ecran, pe linii separate, toate cuvintele sale care conțin o singură vocală distinctă, ca în exemplu.
Dacă nu există niciun astfel de cuvânt, se afișează pe ecran mesajul nu exista. Se
consideră vocale literele din mulțimea a, e, i, o, u.
Exemplu: pentru textul a plantat cinci lalele visinii sau rosii
se afișează pe ecran, nu neapărat în această ordine, cuvintele alăturate.

cuv alaturate:
a
plantat
cinci
visinii
*/
