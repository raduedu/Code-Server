#include <iostream>
using namespace std;

int main() {
	int n = 0, k = 0, cnt = 0;
	cin >> n >> k;

	for (int l = k; l <= n; l++) {
		int c = 1;
		for (int i = 1; i <= k - 1; i++) {
			c = c * (l - i) / i;
		}
		cnt += c;
	}

	cout << cnt;

	return 0;
}