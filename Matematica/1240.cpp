#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, c1, c2, c3, c4, c;
    string s1, s2;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        cin >> s1;
        cin >> s2;
        c3=s1.size()-1;
        c4=s2.size()-1;
        c=0;
        for(c2=s2.size()-1; c2>=0; c2--){
            if(s1[c3]==s2[c2])
                c++;
            c3--;
        }
        if(c==s2.size())
            printf("encaixa\n");
        else
            printf("nao encaixa\n");

    }
    return 0;
}

