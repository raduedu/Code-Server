//model 2025 - II - 1 - d) programul in C++
#include <iostream>
using namespace std;

int main() {
	int m, n, x, y;
	cin >> m >> n;
	x = m; y = n; n = n - 1;
	while (!(x != 1)) {
		x = m; y = n; n = n - 1;
		if (x > y) x = x - y;
		else y = y - x;
		while (!(y == 0)) {
			if (x > y) x = x - y;
			else y = y - x;

		}
	}
	cout << n + 1;
	return 0;
}