#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n, l, ok = 1;
	char c[101][11], s[101], rez[501], *p;

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> c[i];

	cin.ignore();
	cin.getline(s, 101);

	p = strtok(s, " ");
	while (p != NULL) {
		l = strlen(p);
		if (p[0] == '*') {
			ok = 0;
			for (int i = 1; i <= n; i++)
				if (strlen(c[i]) == l) {
					strcat(rez, c[i]);
					strcat(rez, " ");
					ok = 1;
					break;
				}
		} else {
			strcat(rez, p);
			strcat(rez, " ");
		}
		p = strtok(NULL, " ");
	}

	if (ok == 1)
		cout << rez;
	else
		cout << "imposibil";

	return 0;
}