#include <iostream>
#include <fstream>
using namespace std;

int prim[10], ultim[10];

int main(){
    int n, k = 0, max = 0;
    ifstream fin("secventaincadrata.in");
    ofstream fout("secventaincadrata.out");

    for (int i = 0; i <= 9; i++)
        prim[i] = -1;

    while (fin >> n){
        k++;
        if (prim[n] == -1)
            prim[n] = k;
            
        ultim[n] = k;
    }

    for (int i = 0; i <= 9; i++){
        if (prim[i] != -1 && prim[i] != ultim[i])
            if (ultim[i] - prim[i] + 1 > max)
                max = ultim[i] - prim[i] + 1;
    }
    fout << max << endl;

    for (int i = 0; i <= 9; i++){
        if (prim[i] != -1 && prim[i] != ultim[i])
            if (ultim[i] - prim[i] + 1 == max)
                fout << i << " ";
    }

    fin.close();
    fout.close();
    return 0;
}