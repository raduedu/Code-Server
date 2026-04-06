#include <iostream>
using namespace std;

int Impare(int n){
    int cn=0, i=1, ok = 0, c = 0;
    while (n > 0){
        c = n%10;
        cn += c*i;
        if(c%2 == 1){
            i*=10;
            cn += c*i;
            ok = 1;
        }
        n /= 10;
        i*=10;
    }
    if (ok == 1)
        return cn;
    else
        return -1; 
}

int main(){
    int n = 1;
    cout << Impare(n);
    return 0;
}