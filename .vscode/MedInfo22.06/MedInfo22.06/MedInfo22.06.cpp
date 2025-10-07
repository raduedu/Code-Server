#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main() {
	int l = 0, ok = 0, lp = 0;
	char c[101], * p, rez[500], ant[21];
	cin.getline(c, 101);

	strcpy(rez, "");
	strcpy(ant, "");

	p = strtok(c, " ");
	while (p != NULL) {
		lp = strlen(p);
		if (strlen(ant) > 0) {
			l = strlen(ant);
			if (ant[l - 1] == p[lp - 1]) {
				strcat(rez, " succes");
				ok = 1;
			}
		}

		if (strlen(rez) > 0)
			strcat(rez, " ");
		strcat(rez, p);

		strcpy(ant, p);
		p = strtok(NULL, " ");
	}

	if (ok == 1)
		cout << rez;
	else
		cout << "nu exista";

	return 0;
}
/*
Într-un text cu cel mult 10^2 caractere cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat, pe care îl modifică în memorie, inserând cuvântul succes între oricare două cuvinte ale sale
care se termină cu aceeași literă. Cuvântul inserat este separat prin câte un spațiu de cuvintele vecine.
Textul transformat este afișat pe ecran, iar dacă nu există perechi de astfel de cuvinte, se afișează pe
ecran mesajul *nu exista*.

Exemplu: dacă textul citit este: 
testez validez utilizez date corecte acum
	se obține textul
testez succes validez succes utilizez date succes corecte acum
*/
