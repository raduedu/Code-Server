#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main() {
	int l = 0;
	char c[101], * p, * virgula, rez[500];
	cin.getline(c, 101);

	strcpy(rez, "");

	p = strtok(c, " ");
	while (p != NULL) {
		virgula = strchr(p, ',');

		if (virgula != NULL)
			*virgula = '\0';

		if (strlen(rez) > 0)
			strcat(rez, " ");
		strcat(rez, p);

		p = strtok(NULL, " ");
	}

	cout << rez;

	return 0;
}
/* TEST 20
Un text cu cel mult 100 de caractere conține cuvinte și numere, separate prin câte un spațiu. Cuvintele
sunt formate numai din litere mici ale alfabetului englez, iar numerele sunt reale, pozitive, cu partea
întreagă și partea zecimală separate prin simbolul virgulă, sau numai cu partea întreagă, ca în exemplu.
Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat și îl transformă în
memorie, înlocuind fiecare număr real cu partea întreagă a acestuia.
Exemplu: pentru textul
partea intreaga a lui 5,75 este egala cu a lui 5,25 si cu a lui 5 si este 5
se afișează pe ecran
partea intreaga a lui 5 este egala cu a lui 5 si cu a lui 5 si este 5
*/
