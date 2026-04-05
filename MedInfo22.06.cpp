#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int max = 0, maxg = 0, nr1 = 0, nr2 = 0, ok, n, aux, a;
    ifstream fin("bac.in");

    while (fin>>n){
        max = 0;
        aux = n;
        while (aux > 0){
            a = aux % 10;
            if (a>max)
                max = a;
            aux /=10;
        }
        if (max > maxg){
            maxg = max;
            nr1 = n;
            nr2 = 0;
        }
        else if (max == maxg)
            nr2 = n;
        
    }
    if (nr2 == 0)
        cout << "Nu exista";
    else 
        cout << nr1 << " " <<nr2;

    fin.close();
    return 0;   
}

/*
a)
Programul citeste fiecare numar din fisier si calculeaza cifra maxima a numarului curent. Daca cifra maxima a numarului 
curent este mai mare decat cifra maxima globala, actualizeaza maximul global si salveaza numarul curent, 
resetand al doilea numar la 0. Daca cifra maxima a numarului curent este egala cu maximul global, salveaza numarul curent ca al doilea numar. 
La final, daca al doilea numar este diferit de 0, inseamna ca exista cel putin doua numere cu cifra maxima globala si se afiseaza primul si ultimul, 
altfel se afiseaza "Nu exista".

Programul este eficient din punct de vedere al memoriei, deoarece retine doar cifra maxima globala, cifra maxima a numarului curent, 
primul si ultimul numar si cateva variabile auxiliare. Nu se stocheaza numerele din fisier.

Programul este eficient din punct de vedere al timpului de executie, deoarece fisierul este parcurs o singura data (algoritm liniar), 
iar pentru fiecare numar se calculeaza cifra maxima in timp. Nu se fac parcurgeri multiple sau sortari, astfel fiind un algoritm liniar.
*/



//de facut descriere faina (algoritm liniar) + urmatorul test
//de gandit pe ce sa insistam la poli