#include <iostream>
using namespace std;

void Plus(int &n) {
	int x[10], k = 0;
	while (n > 0) {
		x[++k] = n % 10;
		n = n / 10;
	}
	for (int i = k; i >= 2; i--) {
		if (x[i] == 2 && x[i - 1] == 5)
			x[i - 1] = 6;
		n = n * 10 + x[i];
	}
	n = n * 10 + x[1];
}

int main() {
	int n = 0;
	cin >> n;
	Plus(n);
	cout << endl << n;

	return 0;
}