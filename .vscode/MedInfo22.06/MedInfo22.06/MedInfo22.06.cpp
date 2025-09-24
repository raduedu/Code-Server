#include <iostream> 
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	int ok = 1, n = 0;
	char c[256], *p, voc[11];
	cin.getline(c, 256);
	
	strcpy(voc, "aeiouAEIOU");
	
	p = strtok(c, " ");
	while (p != NULL) {
		n = strlen(p);
		ok = 1;
		
		for (int i = 0; i < n && ok == 1; i++) {
			if (strchr(voc, p[i]) == NULL)
				ok = 0;
		}
		
		if (ok == 1)
			cout << p << endl;
			
		p = strtok(NULL, " ");
	}
	
	cout<<endl;
	return 0;
}