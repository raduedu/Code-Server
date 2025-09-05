/*
Fişierele bac1.txt și bac2.txt conţin numere naturale din intervalul [1,10^5]: fişierul bac1.txt
conține pe prima linie un număr n1, iar pe a doua linie un șir de n1 numere, iar fișierul bac2.txt
conține pe prima linie un număr n2, iar pe a doua linie un șir de n2 numere. Numerele aflate pe
aceeași linie a unui fișier sunt ordonate crescător și sunt separate prin câte un spațiu.
Se cere să se afișeze pe ecran, în ordine crescătoare, separate prin câte un spațiu, numerele divizibile
cu 5 care se găsesc doar în unul dintre şirurile aflate în cele două fișiere. Dacă nu există niciun astfel de
număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient din punctul de vedere
al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul bac1.txt conţine numerele
7
1 2 3 4 5 7 20 60
iar fişierul bac2.txt conţine numerele
9
3 5 7 8 9 10 12 20 24
pe ecran se afișează, în această ordine, numerele 5 10 60.
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienţa acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f1("bac1.txt");
    ifstream f2("bac2.txt");

    int n1, n2, x, y, ok = 0;
    f1 >> n1;
    f2 >> n2;

    f1 >> x;
    f2 >> y;

    while (n1 > 0 && n2 > 0) {
        if (x < y) {
            if (x % 5 == 0) {
                cout << x << " ";
                ok = 1;
            }
            n1--;
            if (n1 > 0)
                f1 >> x;
        }
        else if (x > y) {
            if (y % 5 == 0) {
                cout << y << " ";
                ok = 1;
            }
            n2--;
            if (n2 > 0)
                f2 >> y;
        }
        else {
            n1--;
            n2--;
            if (n1 > 0)
                f1 >> x;
            if (n2 > 0)
                f2 >> y;
        }
    }

    while (n1 > 0) {
        if (x % 5 == 0) {
            cout << x << " ";
            ok = 1;
        }
        n1--;
        if (n1 > 0)
            f1 >> x;
    }

    while (n2 > 0) {
        if (y % 5 == 0) {
            cout << y << " ";
            ok = 1;
        }
        n2--;
        if (n2 > 0)
            f2 >> y;
    }

    if (ok == 0)
        cout << "nu exista";

    f1.close();
    f2.close();

    return 0;
}

/*a)
Programul este eficient din punct de vedere al memoriei, deoarece nu stocheaza sirurile in tablouri unidimensionale, ci citeste
cate un element din fiecare fisier la un moment dat.
Programul este eficient din punct de vedere al timpului de executie, deoarece parcurge fiecare sir o singura data,
profitand de faptul ca numerele sunt deja sortate crescator.

Programul foloseste tehnica de interclasare pentru a parcurge simultan cele doua siruri sortate. Compara elementul
curent din primul fisier cu elementul curent din al doilea fisier. Daca sunt diferite, elementul mai mic este
unic in sirul sau, deci il verifica daca este divizibil cu 5 si il afiseaza daca da. Daca elementele sunt egale,
le sare pe ambele deoarece nu sunt unice. Programul executa acest proces pana cand unul dintre siruri se termina, apoi
verifica elementele ramase din celalalt sir. Variabila ok verifica daca s-a afisat cel putin un numar pentru
a putea afisa mesajul "nu exista" daca este cazul.
*/