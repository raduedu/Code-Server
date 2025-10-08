#include <iostream> 
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	int v = 0, c = 0, l = 0, cnt = 0;
	char text[101], * p, voc[6];
	cin.getline(text, 101);

	strcpy(voc, "aeiou");

	p = strtok(text, " ");
	while (p != NULL) {
		v = 0;
		c = 0;
		l = strlen(p);

		for (int i = 0; i < l; i++) {
			if (strchr(voc, p[i]) != NULL)
				v++;
			else
				c++;
		}

		if (v == c)
			cnt++;

		p = strtok(NULL, " ");
	}

	cout << cnt;

	return 0;
}
/* TEST 15
Într-un text cu cel mult 100 de caractere, cuvintele sunt formate din litere mici ale alfabetului englez și
sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat și afișează pe ecran numărul de cuvinte ale sale formate dintr-un număr egal de vocale și
consoane. Se consideră vocale literele din mulțimea a, e, i, o, u.
Exemplu: pentru textul
cuvantul consoane are un numar de patru vocale si patru consoane
se afișează pe ecran 6.
*/
