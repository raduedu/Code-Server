#include <iostream>
#include <fstream>
using namespace std;

int v[100];

int main(){
    int n, max = 0, k = 0;
    ifstream fin("bac.in");
    ofstream fout("bac.out");

    while (fin >> n){
        while (n >= 10){
            if (n % 100 >= 10)
                v[n % 100]++;
            n /= 10;
        }
    }

    for (int i = 10; i <= 99; i++)
        if (v[i] > max)
            max = v[i];

    for (int i = 99; i >= 10; i--)
        if (v[i] == max)
            fout << i << " ";

    fin.close();
    fout.close();
    return 0;
}