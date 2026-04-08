#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char s[256], rez[21], *p;
    int l, ok, max = 0;

    cin.getline(s, 256);

    p = strtok(s, " :;.,");
    while (p != NULL){
        l = strlen(p);
        ok = 1;
        for (int i = 0; i < l/2 && ok == 1; i++)
            if (p[i] != p[l-1-i] && p[i] != p[l-1-i] + 32 && p[i] != p[l-1-i] - 32)
                ok = 0;
        if (ok == 1 && l > max){
            max = l;
            strcpy(rez, p);
        }
        p = strtok(NULL, " :;.,");
    }

    cout << rez;
    return 0;
}