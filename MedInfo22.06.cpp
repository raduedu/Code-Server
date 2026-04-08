#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char x[1001], y[1001], *p, *q;
    char mx[500][21], my[500][21];
    int nr = 0, ok = 0, kx = 0, ky = 0, l = 0;

    cin.getline(x, 1001);
    cin.getline(y, 1001);

    p = strtok(x, " .,!?:;");
    while (p != NULL){
       kx++;
       strcpy(mx[kx],p);
        p = strtok(NULL, " .,!?:;");
    }
    q = strtok(y, " .,!?:;");
    while (q != NULL){
       ky++;
       strcpy(my[ky],q);
        q = strtok(NULL, " .,!?:;");
    }

    for (int i = 1; i <= kx; i++){
        l = strlen(mx[i]);
        ok = 0;
        for (int j = 1; j <=ky; j++)
            if (strncmp(mx[i], my[j], l) == 0){
                ok = 1;
                break;
            }
            if (ok == 1)
                nr++;
    }
    
    cout << nr;
    return 0;
}