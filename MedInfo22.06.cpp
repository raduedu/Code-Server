#include <iostream>
#include <fstream>
using namespace std;

int v[10];

int main(){
    int n, c, k = 0;
    ifstream fin("cifreord1.in");
    ofstream fout("cifreord1.out");

    while (fin >> n){
        if (n==0)
            v[0]++;
        while (n > 0){
            c = n % 10;
            v[c]++;
            n /= 10;
        }
    }

    for (int i = 9; i >= 0; i--)
        while (v[i] > 0){
            fout << i << " ";
            v[i]--;
            k++;
            if (k == 20){
                fout << endl;
                k = 0;
            }
        }

    fin.close();
    fout.close();
    return 0;
}