/*
Fişierul numere.txt conţine cel mult 10^5 numere naturale din intervalul [1,10^9], câte unul pe fiecare
linie. Se cere să se afișeze pe ecran cel mai mare număr care se poate forma cu toate cifrele care apar în numerele din fișier, ca în exemplu.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul are conținutul alăturat, se afişează
9988887766333220

(continutul):
263
39628
79
887308

a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.

NOI IL FACEM CEL MAI MIC NUMAR, E MAI FUN
*/
#include <iostream>
#include <fstream>
using namespace std;

int v[10];

int main() {
    ifstream fin("bac.in");
    int cif, nr, min = 1, k = 0;

    while (fin >> nr) {
        while (nr != 0) {
            cif = nr % 10;
            v[cif]++;
            nr /= 10;
        }
    }

    for (int i = 0; i <= 9; i++) {
        if (i != 0 && v[i] != 0 && k == 0) {
            cout << i;
            k = 1;
            v[i]--;
            i = -1;
        }
        else if (k == 1){
           while (v[i] != 0) {
              cout << i;
              v[i]--;
            }
        }
    }

    cout << endl;
    fin.close();
    return 0;
}

/*a)
Programul este eficient din punct de vedere al memoriei, deoarece 
Programul este eficient din punct de vedere al timpului de executie, deoarece parcurge sirul de cifre o singura data

Programul 
*/