#include <iostream>
#include <fstream>
using namespace std;

int main() {
	long long n = 0, nr2 = 0, nr13 = 0, p = 0;
	ofstream fout("bac.out");
	cin >> n;

	long long d = 2;
	while (d <= n) {
		nr2 = nr2 + n / d;
		d = d * 2;
	}

	d = 13;
	while (d <= n) {
		nr13 = nr13 + n / d;
		d = d * 13;
	}

	if (nr2 < nr13)
		p = nr2;
	else
		p = nr13;

	fout << p;
	fout.close();

	return 0;
}