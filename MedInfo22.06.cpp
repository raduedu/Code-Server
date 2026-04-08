#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[101], *p;
    char *note[7] = {"DO", "RE", "MI", "FA", "SOL", "LA", "SI"};
    int ok = 0, gasit;

    cin.getline(s, 101);

    p = strtok(s, " ");
    while (p != NULL){
        gasit = 0;
        for (int i = 0; i < 7 && gasit == 0; i++)
            if (strstr(p, note[i]) != NULL)
                gasit = 1;
        if (gasit == 1){
            cout << p << endl;
            ok = 1;
        }
        p = strtok(NULL, " ");
    }

    if (ok == 0)
        cout << "nu exista";

    return 0;
}