#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("bac.in");
    ofstream fout("bac.out");
    char s1[1001], *p, s2[51] = "zzzz", s4[1001][51], aux, s5[51], ss1[1001][51]; //s2 pt 2, s4 pt 4, 
    int T, cuv = 0, nr_ini3 = 0, k = 0, cuv5 = 0, lp = 0, lpi, lmin, lmax; //cuv pt 1, cuv 5 pt 5, nr_ini3 pt 3
    fin>>T;
    fin.get();
    fin.getline(s1, 1001);
    p = strtok(s1, " .,!?:;-");
    strcpy(s2, p);
    lpi = strlen(p);
    lmin = lpi;
    lmax = lpi;
    while(p != NULL){
        
        cuv++; //T = 1
        strcpy(ss1[cuv], p);

        lp = strlen(p);
        
        if (strcmp(s2, p) > 0) //T = 2
            strcpy(s2, p);

        if(strstr(p, "ini") != NULL) //T = 3
            nr_ini3++;

        strcpy(s4[cuv], p); //T = 4
        k = strlen(s4[cuv]);
        for(int i = 0; i<k/2; i++){
            aux = s4[cuv][i];
            s4[cuv][i] = s4[cuv][k-1-i];
            s4[cuv][k-1-i] = aux;
        }

        if(p[lp-1] == 'a') //T = 5
             cuv5++;

        if(lp > lmax)
            lmax = lp;

        if(lp < lmin)
            lmin = lp;
        
        p = strtok(NULL, " .,!?:;-");
    }
    //CODU ALA IMPORTANT E GATA

    switch(T){
        case 1:
        fout << cuv<<endl;
        for (int i = 1; i<=cuv; i++)
            fout<< ss1[i] << endl;
        break;
        case 2:
        fout << s2;
            break;
        case 3:
        fout << nr_ini3;
            break;
        case 4:
        for (int i = 1; i <= cuv; i++)
            fout << s4[i]<<endl;
            break;
        case 5:
        fout<<cuv5;
            break;
        case 6:
        fout<< lmin << " "<<lmax;
        break;
        default:
        fout<<"nush frt lsm sa compilez";
    }

        
    return 0;
}