#include <iostream> 
using namespace std;

int a[101][101];

int main() {
	int n = 0, m = 0, nr1 = 0, nr2 = 0;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j <= 9)
				nr1 = i * 10 + j;
			else
				nr1 = i * 100 + j;
			if (i <= 9)
				nr2 = j * 10 + i;
			else
				nr2 = j * 100 + i;
			if (nr1 > nr2)
				a[i][j] = nr2;
			else
				a[i][j] = nr1;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}