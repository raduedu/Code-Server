#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main() {
	int l = 0, ok = 0, lp = 0;
	char c[101], * p;
	cin.getline(c, 101);

	p = strtok(c, " ");
	while (p != NULL) {
		lp = strlen(p);
		p[0] = toupper(p[0]);
		for (int i = 1; i < lp; i++)
			p[i] = tolower(p[i]);
		//test sync
		
		cout << p << " ";
		
		p = strtok(NULL, " ");
	}

	return 0;
}
/* TEST 11
Într-un text cu cel mult 10^2 caractere, cuvintele sunt formate din litere mici și mari ale alfabetului englez
și sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de
tipul precizat, pe care îl transformă, astfel încât fiecare cuvânt să aibă prima literă mare, și toate
celelalte litere mici. Textul obținut se afişează pe ecran.
Exemplu: dacă de la tastatură se introduce textul: 
ABIA aSTept sa Merg lA scoala
se obține textul :
Abia Astept Sa Merg La Scoala
*/
