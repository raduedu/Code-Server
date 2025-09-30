#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char s[20];
    strcpy(s, "stilou" + 4);
    cout << s << endl;
    strncpy(s, "stilou", 4);
    cout << s << endl;

	return 0;
}
