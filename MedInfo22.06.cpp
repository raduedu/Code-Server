/*
La o centrală solară se monitorizează stocul zilnic de energie produsă și stocul total calculat pentru
fiecare perioadă. Zilele de monitorizare sunt numerotate cu valori naturale consecutive, în ordine cronologică,
începând cu ziua 1. O perioadă este formată din cel puțin două zile de monitorizare, consecutive, iar stocul
total calculat pentru ea este suma stocurilor zilnice corespunzătoare. O zi este validată dacă stocul zilnic
este cel puțin egal cu limita zilnică, minZ; o perioadă este validată dacă stocul total calculat pentru ea este
cel puțin egal cu limita stabilită pentru perioade, minP, fiecare zi a perioadei este validată, iar perioada este
maximală în raport cu această proprietate (nu i se mai poate adăuga nicio zi validată).
Fișierul text bac.in conține cel mult 106 numere naturale din intervalul [1,103]: pe prima linie minZ și
minP, reprezentând limitele precizate pentru validare, iar pe a doua linie stocurile zilnice de energie produse
în zile consecutive, în ordinea monitorizării. Numerele aflate pe aceeași linie a fișierului sunt separate prin
câte un spațiu.
Se cere să se afișeze pe ecran, pentru fiecare perioadă de producție validată, corespunzătoare datelor din
fișier, câte un triplet de numere, reprezentând prima și ultima zi a perioadei, respectiv stocul total calculat
pentru ea. Valorile din fiecare triplet se afișează pe câte o linie a ecranului, separate prin câte un spațiu, iar
dacă nu există nicio astfel de perioadă, se afișează mesajul nu exista. Proiectați un algoritm eficient din
punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține valorile alăturate,
se afișează pe ecran
3 6 71
13 15 90
Valorile alaturate:
10 40
65 9 20 25 12 14 7 3 11 15 12 8 19 50 21
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("bac.in");
    int minZ, minP, x, z = 0, ok = 0;
    fin >> minZ >> minP;
    
    while (fin >> x) {
        z++;
        
        if (x >= minZ) {
            int st = z, s = x, sf = z;
            
            while (fin >> x && x >= minZ) {
                z++;
                s += x; 
                sf = z;
            }
            
            if (x < minZ) 
                z++;
            
            if (sf - st >= 1 && s >= minP) {
                cout << st << " " << sf << " " << s << "\n";
                ok = 1;
            }
        }
    }
    
    if (!ok) 
        cout << "nu exista\n";

    fin.close();
    return 0;
}

/*
Programul este eficient din punct de vedere al memoriei deoarece nu memoreaza toate numerele intr-un tablou, ci foloseste doar cateva variabile simple pentru a calcula sumele pe moment. 
Programul este eficient din punct de vedere al timpului de executare deoarece parcurge numerele din fisier o singura data, procesand datele din mers, fara sa reciteasca valorile.

Algoritmul citeste limitele impuse, apoi parcurge zilele rand pe rand. Cand intalneste o zi cu productie buna (peste limita zilnica), incepe sa adune energia din zilele imediat urmatoare, atata timp cat si acestea sunt bune, pentru a forma o perioada cat mai lunga. Cand seria de zile bune se intrerupe, se verifica daca perioada a durat cel putin doua zile si daca totalul energiei acumulate respecta limita ceruta. Daca toate conditii sunt indeplinite, se afiseaza perioada; daca nu, se continua cautarea.
*/