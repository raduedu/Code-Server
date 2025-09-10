/*
Se consideră şirul 1, 3, 7, 13, 21, 31, 43 ... definit astfel: f_{0} = 1 iar f_{n} = f_{n - 1} + 2n, dacă n >= 1 (unde n este un număr natural). 
Se citesc de la tastatură două numere naturale din intervalul [1,10^9], x și y (x < y), reprezentând doi termeni aflați pe poziții consecutive în şirul dat, și se cere să se scrie în fișierul text bac.out,
separați prin câte un spațiu, toți termenii şirului mai mici sau egali cu y, în ordine inversă a apariției lor în şir.
Proiectați un algoritm eficient din punctul de vedere al spațiului de memorie și al timpului de executare.
Exemplu: dacă x = 21 și y = 31 , fişierul conţine valorile
31 21 13 7 3 1
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("bac.out");
    int x, y;
    cin >> x >> y;
    for (int i = (y - x)/2; i >= 0; i--) {
        fout << y << " ";
        y -= 2 * i;
    }

    fout << endl;
    fout.close();
    return 0;
}
/*a)
Programul este eficient din punct de vedere al memoriei, deoarece retine doar numerele x si y.
Programul este eficient din punct de vedere al timpului de executie, deoarece, dupa ce i se ofera cifrele x si y incepe sa parcurga sirul de numere, in functie de formula oferita, in ordine inversa.

Programul foloseste formula din enunt si parcurge sirul in ordine inversa, de la f(n) pana la f(0).
*/