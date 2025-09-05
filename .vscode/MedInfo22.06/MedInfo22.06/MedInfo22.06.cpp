/*
Fişierul bac.txt conține cel mult 106 cifre, separate prin câte un spațiu.
Se cere să se afișeze pe ecran, separate prin câte un spațiu, toate cifrele pare care apar în fișier sau mesajul nu exista, dacă nu există astfel de cifre. Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul conține cifrele 3 3 0 8 2 1 2 1 3 7 1 5 2 7 1 0 3 2 3
pe ecran se afişează, de exemplu în ordine crescătoare, cifrele 0 0 2 2 228
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b. Scrieți programul C/C++corespunzător algoritmului proiectat.
*/
#include <iostream>
#include <fstream>
using namespace std;

int v[10];

int main() {
    ifstream fin("bac.in");
    int nr;
    while (fin >> nr) {
        v[nr]++;
    }

    for (int i = 0; i <= 8; i+=2) {
        for (int j = 1; j <= v[i]; j++)
            cout << i << " ";
    }

    fin.close();
    return 0;
}

/*a)
Programul este eficient din punct de vedere al memoriei, deoarece stocheaza doar numarul de cifre, dar nu cifrele in sine
Programul este eficient din punct de vedere al timpului de executie, deoarece parcurge sirul de cifre o singura data, iar apoi, 
in functie de vectorul caracteristic afisez valorile cautate de cate ori au aparut in sirul initial

Programul verifica de cate ori apare fiecare cifra si il stocheaza pe pozitia cifrei respective (ex: daca v[2] = 3, atunci 2 este afisat de 3 ori)
*/