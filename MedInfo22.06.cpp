#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[401], rez[401], aux[401], *p; //era 201 inainte, Caught Fatal Signal 11, deci am dublat dimensiunile si acum primesc scorul bun
    int l, ok = 0;

    cin.getline(s, 201);
    strcpy(rez, "");

    p = strtok(s, " ");
    while (p != NULL){
        l = strlen(p);
        if (l % 2 == 0){
            ok = 1;
            strcpy(aux, p + l/2);
            strncat(aux, p, l/2);
            strcat(rez, aux);
        } else {
            strcat(rez, p);
        }
        strcat(rez, " ");
        p = strtok(NULL, " ");
    }

    if (ok == 1)
        cout << rez;
    else
        cout << "nu exista";

    return 0;
}