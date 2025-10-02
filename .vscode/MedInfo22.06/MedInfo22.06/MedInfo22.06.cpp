#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	int l = 0, lv = 0, ok = 0, k = 0;
	char s[103], * p, c;

	cin.getline(s, 103);
	l = strlen(s);
	p = strtok(s, " ");

	while (p != NULL) {
		lv = strlen(p);
		c = strlen(p) + strlen(strtok(p, " "));
		if () {

		}
		p = strtok(NULL, " ");
	}

	if (ok == 0)
		cout << "nu exista";

	return 0;
}
/*
Într-un text cu cel mult 102 caractere cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat, pe care îl modifică în memorie, inserând cuvântul succes între oricare două cuvinte ale sale
care se termină cu aceeași literă. Cuvântul inserat este separat prin câte un spațiu de cuvintele vecine.
Textul transformat este afișat pe ecran, iar dacă nu există perechi de astfel de cuvinte, se afișează pe
ecran mesajul *nu exista*.

Exemplu: dacă textul citit este: testez validez utilizez date corecte acum
	se obține textul
testez succes validez succes utilizez date succes corecte acum
*/
