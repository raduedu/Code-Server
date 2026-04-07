#include <iostream>
#include <fstream>
using namespace std;

int v[1001];

int main(){
    int n, cnt = 0, n1 = 0, n2 = 0;
    ifstream fin("bac.in");
    ofstream fout("bac.out");
    while (fin >> n){
        if (n >= 100 && n <= 999)
            v[n]++;
    }
    for (int i = 999; i>=100 && n2 == 0; i--){
        if (v[i] == 0){
            if(n1 == 0)
                n1 = i;
            else
                n2 = i;
        }
    }
    if (n1*n2 != 0)
        fout << n1 << " " << n2;
    else
        fout << ":(";


    return 0;
}