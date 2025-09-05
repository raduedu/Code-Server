/*
Fişierul bac.txt conține un șir de cel mult 10^6 numere naturale din intervalul [0,10^9].
Se cere să se determine și să se afișeze pe ecran, separate printr-un spațiu, ultimele două numere impare (nu neapărat distincte) 
din şirul aflat în fișier, sau mesajul nu exista, dacă nu există două astfel de numere. Proiectați un algoritm eficient din punctul 
de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține valorile 122 1635 628 1413 1647 900 3001 4252
se afișează pe ecran 1647 3001
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("bac.in");
    int n1 = 0, n2 = 0, nr;
    while (fin >> nr) {
        if (nr % 2 == 1) {
            n2 = n1;
            n1 = nr;
        }
    }
    if (n1 * n2 == 0)
        cout << "Nu exista\n";
    else
        cout << n2 << " " << n1;


    fin.close();
    return 0;
}

/*a)
Programul este eficient din punct de vedere al memoriei, deoarece stocheaza doar ultimele 2 numere impare, nu prelucreaza tabloul unidmensional
Programul este eficient din punct de vedere al timpului de executie, deoarece parcurge sirul de cifre o singura data, si determina care sunt 
ultimele doua numere impare gasite

Programul verifica fiecare numar si determina daca este impar. Daca da, atunci penultimul numar ia valoarea ultimului numar impar, 
iar cele doua se afiseaza.
*/