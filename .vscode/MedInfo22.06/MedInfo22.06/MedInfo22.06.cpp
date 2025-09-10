/*
Fişierul bac.txt conține un şir de cel mult 10^5 numere naturale din intervalul [1,10^9], separate prin câte un spațiu. 
Se cere să se afișeze pe ecran cea mai mare poziție pe care ar putea-o ocupa primul termen al şirului aflat în fişier în şirul format cu aceleaşi valori, 
ordonat descrescător. Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.

Exemplu: dacă fișierul bac.txt conține numerele 15 7 15 17 6 4 21
se afișează pe ecran 4 (15 se află pe a treia și pe a patra poziție în şirul 21, 17, 15, 15, 7, 6, 4).

a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("bac.in");
    int cn = 0, k = 0, nr;

    fin >> nr;
    cn = nr;
    while (fin >> nr) {
        if (nr >= cn)
            k++;
    }
    cout << k + 1;

    cout << endl;
    fin.close();
    return 0;
}
/*a)
Programul este eficient din punct de vedere al memoriei, deoarece stocheaza doar pozitia pe care s-ar afla numarul daca ar fi intr-un sir descrescator,
o copie a primului numar din sir, si numarul curent verificat din sir
Programul este eficient din punct de vedere al timpului de executie, deoarece parcurge sirul de cifre o singura data, simultan verificand daca numarul
curent din sir este mai mare sau egal decat primul numar, daca da, contorul creste.

Programul pastreaza o copie a primului numar din sir. Apoi, verifica celelalte numere din sir, daca acestea sunt mai mari sau egale decat primul numar, atunci
contorul nostru creste, contorul determina pozitia pe care ar lua-o primul numar in cazul unei sortari crescatoare. Totusi, o sortare nu este necesara,
pozitia sa poate fi determinata doar stiind cate numere ar fi inaintea acestuia. Apoi, se afiseaza contorul + 1 (+1 pentru a vedea care este pozitia numarului, 
restul programului calculand numarul de pozitii dinaintea primului numar, fara a il include), care este pozitia finala a primului numar, in cazul unei sortari crescatoare.
*/