#include <iostream>
using namespace std;

int main() {
	int k = 0, ext[6], nrext = 0, cnt = 0;
	cin >> k;

	for (int i = 1; i <= 10; i++) {
		if (i < k || i > k + 4)
			ext[nrext++] = i;
	}

	for (int perm = 0; perm < 2 && cnt < 12; perm++) {
		for (int poz = 0; poz < 6 && cnt < 12; poz++) {
			for (int i = 0; i < nrext; i++) {
				if (i == poz) {
					for (int j = k; j <= k + 4; j++)
						cout << j << " ";
				}
				cout << ext[i] << " ";
			}

			if (nrext == poz) {
				for (int j = k; j <= k + 4; j++)
					cout << j << " ";
			}

			cout << endl;
			cnt++;
		}

		int temp = ext[0];
		ext[0] = ext[nrext - 1];
		ext[nrext - 1] = temp;
	}

	return 0;
}