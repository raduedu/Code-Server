#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main() {
	int l = 0, ok = 0, lp = 0, pozvoc = 0;
	char c[101], * p, voc[7];
	cin.getline(c, 101);
	strcpy(voc, "aeiou");
	l = strlen(c);

	for (int i = 0; i <
		l; i++) {
		if (strchr(voc, c[i]) != NULL) {
			pozvoc = i;
			ok = 1;
		}
	}
	strcpy(c + pozvoc, c + pozvoc + 1);

	if (ok == 0)
		cout << ":(";
	else cout << c;
	

	return 0;
}
/* TEST 12
Într-un text cu cel mult 10^2 caractere, cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
precizat, pe care îl transformă în memorie, eliminând numai ultima vocală care apare în text, ca în
exemplu. Programul afișează pe ecran textul obținut sau mesajul nu exista, dacă în text nu există
nicio vocală. Se consideră vocale literele a, e, i, o, u.
Exemplu: dacă se citește textul: 
cuvantul ritm poate fi tradus rhythm

se obține textul: 
cuvantul ritm poate fi trads rhythm
*/
