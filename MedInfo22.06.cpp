#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("bac.in");
    ofstream fout("bac.out");
    char s1[1001], *p, s2[51] = "zzzz", s4[21][51], aux; //s2 pt 2, s4 pt 4, 
    int T, cuv = 0, nr_ini3 = 0, k = 0, cuv5 = 0; //cuv pt 1, cuv 5 pt 5, nr_ini3 pt 3
    fin>>T;
    fin.get();
    fin.getline(s1, 1001);
    p = strtok(s1, " .,!?:;-");
    strcpy(s2, p);
    while(p != NULL){

        if (strcmp(s2, p) > 0)
            strcpy(s2, p);

        if(strstr(p, "ini") != NULL)
            nr_ini3++;

        if(strstr(p, "a\0"))
            cuv5++;

        strcpy(s4[cuv], p);
        k = strlen(s4[cuv]);
        for(int i = 0; i<k/2; i++){
            aux = s4[cuv][i];
            s4[cuv][i] = s4[cuv][k-1-i];
            s4[cuv][k-1-i] = aux;
        }

        cuv++;
        p = strtok(NULL, " .,!?:;-");
    }
        cout << cuv5 <<endl;
    

        
    return 0;
}