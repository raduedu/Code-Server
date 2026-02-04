#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){
    char s[256], t[256];
    int ls = 0, j =0;
    cin.getline(s, 256);
    ls=strlen(s);
    for (int i = 0; i<= ls; i++){
        t[j] = s[i];
        if(strchr("aeiou", s[i])&&strchr("aeiou", s[i+2])&&s[i+1] == 'p'&&s[i] == s[i+2]){
            i+=2;
        }
        j++;
    }

    cout <<endl<< t<<endl;

    return 0;
}