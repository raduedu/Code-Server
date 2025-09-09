/*
Fişierul bac.in conține un șir de cel puțin patru și cel mult 10^5 numere întregi nenule din intervalul [-10^9,10^9], dintre care trei
sunt negative, iar restul pozitive. Numerele sunt separate prin câte un spațiu. O secvență este formată din termeni aflați
pe poziții consecutive în şir, iar lungimea secvenței este egală cu numărul de termeni ai acesteia.
Se cere să se afișeze pe ecran lungimea unei secvenţe din şirul aflat în fișier care conține o singură valoare negativă și un
număr maxim de valori pozitive. Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al
timpului de executare.

Exemplu: dacă fișierul conține numerele 15 21 -61 9 870 -23 11 5 8 -81 5 14
pe ecran se afișează 6 (corespunzător secvențelor 9 870 -23 11 5 8 sau 11 5 8 -81 5 14).

a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("bac.in");
    int poz1 = 0, poz2 = 0, poz3 = 0, nr, k = 0;

    while (fin >> nr) {
        k++;
        if (nr < 0 && poz1 == 0)
            poz1 = k;
        if (nr < 0 && poz2 != poz3)
            poz2 = k;
        if (nr < 0)
            poz3 = k;

    }

    if ((k - poz2) > (poz3 - poz1 - 1))
        cout << (k - poz2);
    else if ((poz3 - poz1 - 1) > (poz2 - 1))
        cout << (poz3 - poz1 - 1);
    else
        cout << (poz2 - 1);
    fin.close();
    return 0;
}

/*a)
Programul este eficient din punct de vedere al memoriei, deoarece tine minte doar pozitiile numerelor negative, nu numerele in sine, ultimul numar din sir 
(variabila este initial folosita doar pentru a parcurge sirul si pentru a verifica numerele din sir, pentru a determina care sunt cele negative), si un contor pentru a putea determina pe ce pozitie se 
afla numerele negative
Programul este eficient din punct de vedere al timpului de executie, deoarece parcurge sirul de cifre o singura data, in care tine minte pozitiile numerelor negative, apoi verifica care dintre secvente 
este mai lunga

Programul verifica fiecare numar pentru a afla daca este negativ, daca da, atunci acesta se incadreaza in pozitia 1, 2 sau 3. Ne este dat inca din enunt informatia ca sunt exact 3 numere negative, 
deci acest lucru este conform. Apoi, verificam fiecare lungime de secventa care apare si le comparam. Cea mai mare valoare pe care o are o secventa existenta va fi afisata pe ecran.
*/