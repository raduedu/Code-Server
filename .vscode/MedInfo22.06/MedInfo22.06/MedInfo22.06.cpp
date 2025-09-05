/*
Două numere naturale sunt numite z-prietene dacă au aceeași cifră a zecilor.
Fişierul bac.in conține un șir de cel mult 10^6 numere naturale din intervalul [10,10^9], separate prin câte un spațiu.
Se cere să se afișeze pe ecran pozițiile din şir pe care se află termeni precedați de un număr maxim de valori z-prietene cu ei.
Numerele afișate sunt separate prin câte un spațiu. Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul conţine numerele 726 358 98 157 20 49 128 879 659 271
pe ecran se afișează numerele 7 9 (termenii 128, respectiv 659 respectă proprietatea cerută).
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/
#include <iostream>
#include <fstream>
using namespace std;

int f[10], v[1000001];

int main() {
    ifstream fin("bac.in");
    int x, n = 0, max = -1;

    while (fin >> x) {
        n++;
        v[n] = x;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 10; j++)
            f[j] = 0;

        for (int j = 1; j < i; j++) {
            int cz = (v[j] / 10) % 10;
            f[cz]++;
        }

        int cz = (v[i] / 10) % 10;
        if (f[cz] > max)
            max = f[cz];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 10; j++)
            f[j] = 0;

        for (int j = 1; j < i; j++) {
            int cz = (v[j] / 10) % 10;
            f[cz]++;
        }

        int cz = (v[i] / 10) % 10;
        if (f[cz] == max && max > 0)
            cout << i << " ";
    }

    fin.close();
    return 0;
}

/*a)
Programul este eficient din punct de vedere al memoriei, deoarece foloseste un vector de frecventa de doar 10 elemente pentru
cifrele zecilor, plus vectorul care stocheaza numerele citite.
Programul este eficient din punct de vedere al timpului de executie, deoarece parcurge sirul de doua ori complet, cu parcurgeri
partiale pentru fiecare element.

Programul citeste toate numerele si le stocheaza intr-un vector. Pentru fiecare element, numara cate numere z-prietene
(cu aceeasi cifra a zecilor) se afla inaintea sa folosind vectorul de frecventa. Determina valoarea maxima a numarului
de z-prietene precedente, apoi parcurge din nou sirul si afiseaza pozitiile elementelor care au exact acel numar maxim
de z-prietene inaintea lor. Cifra zecilor se obtine prin formula (numar / 10) % 10.
*/