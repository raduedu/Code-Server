//model 2025 - II - 1 - c) Scrieti programul in C++
#include <iostream>
using namespace std;

int main() {
	int m, n, x, y;
	cin >> m >> n;
	do {
		x = m; y = n; n = n - 1;
		do {
			if (x > y) x = x - y;
			else y = y - x;

		} while (!(y == 0));
	} while (!(x != 1));
	cout << n + 1;
	return 0;
}