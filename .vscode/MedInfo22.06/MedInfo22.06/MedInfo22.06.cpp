/*
Fişierul bac.txt conţine numere naturale din intervalul [2,106]: pe prima linie n, iar pe a doua linie un șir de n numere, separate prin câte un spațiu.
Se cere să se afișeze pe ecran, pentru fiecare număr natural i (i aparinte [1, n]) , cea mai mare dintre primele i valori ale şirului aflat în fişier. 
Numerele afișate sunt separate prin câte un spațiu. Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fișierul are conținutul alăturat, se afișează pe ecran
12
4 6 3 7 8 1 6 2 7 9 10 8

4 6 6 7 8 8 8 8 8 9 10 10

a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("bac.in");
    int nr, max = 1; //n si i sunt useless
    fin >> nr;
    while (fin >> nr) {
        if (nr >= max) {
            max = nr;
        }
        cout << max << " ";
    }

    fin.close();
    return 0;
}

/*a)
Programul este eficient din punct de vedere al memoriei, deoarece nu tine minte decat ultimul numar, si maximul intalnit in sir.
Programul este eficient din punct de vedere al timpului de executie, deoarece are o singura bucla care verifica fiecare numar din sir si vede daca 
acesta este maxim. Daca este maxim ne arata rezultatul, pana cand se termina se ajunge la acelasi numar de numere ca cel din sir.

Programul verifica daca numerele de pe cel de al doilea rand din fisier sunt maxime, daca sunt, atunci le afiseaza, daca nu sunt, afiseaza ultima valoare maxima.
*/