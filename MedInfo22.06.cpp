#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int k, n;
    char c[100], *p, s[100], jum[50];
    cin.getline(c, 100);
    p = strtok(c, " ");
    strcpy(s, "");
    
    while (p!= 0){
        n = strlen(p);
        if(n%2 == 1)
            strcat(s, p);
        
        else {
            strcpy(jum, p+n/2);
            strncat(jum, p, n/2);
            strcat(s, jum);
        }

        strcat(s, " ");
        p = strtok(NULL, " ");
    }
    cout <<s<<"\n\n";
    return 0;
}