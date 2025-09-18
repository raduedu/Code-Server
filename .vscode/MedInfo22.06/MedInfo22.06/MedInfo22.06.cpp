#include <iostream> 
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	int n;
	char c[256];
	cin.getline(c,256);
	n = strlen(c);
	cout << (char)toupper(c[0]);
	for (int i = 1; i <= n - 1; i++) {
		if (c[i - 1] == ' ' || c[i + 1] == ' ' || c[i+1] == 0 || c[i - 1] == 0) //c[i+1] sau c[i-1] == 0 (null) este necesar? exista alta scriere mai buna?
			cout << (char)toupper(c[i]); //daca nu pun (char) inainte imi converteste char-ul in valoare int ASCII
		else cout << c[i];

	}
	
	cout << endl;
	return 0;
}