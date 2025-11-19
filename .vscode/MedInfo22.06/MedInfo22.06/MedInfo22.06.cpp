#include <iostream>
using namespace std;

int main() {
	int n = 0, a[103][103];
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = n - 1 - i; j < n - 1; j++) {
			a[i][j] = a[i][j + 1];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}