/*
Fişierul bac. txt conține un șir de cel mult 10^5 numere naturale din intervalul [1,10^9], separate prin câte un spaţiu.
Se cere să se afişeze pe ecran cea mai mică poziţie pe care ar putea-o ocupa primul termen al şirului aflat în fişier în şirul format cu aceleași valori, ordonat crescător. 
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 15 7 15 17 6 4
se afişează pe ecran 4 (15 se află pe a patra și pe a cincea poziție în şirul 4, 6, 7, 15, 15, 17).
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
        if (nr < cn)
            k++;
    }
    cout << k + 1;

    cout << endl;
    fin.close();
    return 0;
}

/*a)
Programul este eficient din punct de vedere al memoriei, deoarece stocheaza doar pozitia pe care s-ar afla numarul daca ar fi intr-un sir crescator, 
o copie a primului numar din sir, si numarul curent verificat din sir
Programul este eficient din punct de vedere al timpului de executie, deoarece parcurge sirul de cifre o singura data, simultan verificand daca numarul 
curent din sir este mai mic decat primul numar, daca da, contorul creste.

Programul pastreaza o copie a primului numar din sir. Apoi, verifica celelalte numere din sir, daca acestea sunt mai mici decat primul numar, atunci 
contorul nostru creste, contorul determina pozitia pe care ar lua-o primul numar in cazul unei sortari crescatoare. Totusi, o sortare nu este necesara, 
pozitia sa poate fi determinata doar stiind cate numere ar fi inaintea acestuia. Apoi, se afiseaza contorul + 1, care este pozitia finala a primului numar, 
in cazul unei sortari crescatoare.
*/