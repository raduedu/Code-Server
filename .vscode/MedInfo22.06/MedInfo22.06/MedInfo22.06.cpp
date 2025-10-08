#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main() {
	int n = 0, k = 0, l = 0, ls = 0, cnt = 0;
	char s[500], suf[21], cuv[21], * p;
	cin >> n >> k;

	strcpy(s, "");
	for (int i = 1; i <= n; i++) {
		cin >> cuv;

		if (i == k)
			strcpy(suf, cuv);

		if (strlen(s) > 0)
			strcat(s, " ");
		strcat(s, cuv);
	}

	ls = strlen(suf);

	p = strtok(s, " ");
	while (p != NULL) {
		l = strlen(p);

		if (l > ls && strcmp(p + l - ls, suf) == 0) {
			cout << p << " ";
			cnt = 1;
		}

		p = strtok(NULL, " ");
	}

	if (cnt == 0)
		cout << "nu exista";

	return 0;
}
/* TEST 18
Un cuvânt este sufix al unui alt cuvânt dacă se obține din acesta, prin eliminarea primelor sale litere.
Scrieți un program C/C++ care citește de la tastatură două numere naturale n și k (n[2,20],
k[1,n]) și apoi n cuvinte distincte, fiecare fiind format din cel mult 20 de caractere, numai litere mici
ale alfabetului englez.
La introducerea datelor, după fiecare cuvânt se tastează Enter. Programul
afișează pe ecran, separate prin câte un spațiu, cuvintele care îl au drept sufix
pe al k-lea cuvânt citit, ca în exemplu. Dacă nu există astfel de cuvinte, se
afișează pe ecran mesajul nu exista.
Exemplu: dacă n=7, k=3 și se citesc cuvintele alăturate, pe ecran se afișează
paratirisi hiritisi

cuv alaturate:
isihast
paratirisi
isi
meremetisire
acolisitor
hiritisi
paraponisit
*/
