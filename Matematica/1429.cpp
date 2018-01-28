#include<bits/stdc++.h>
using namespace std;
int f[9]={1, 1, 2, 6, 24, 120, 720, 5040, 40320};
int main(){
    char s[10];
    unsigned long long int n;
    int c1, tam;
    while(1){
        scanf(" %[^\n]s", s);
        if(strlen(s)==1 &&s[0]=='0')
            break;
        n=0;tam=strlen(s);
        for(c1=0; c1<strlen(s); c1++, tam--)
            n+=(s[c1]-'0')*f[tam];
        printf("%llu\n", n);

    }

    return 0;
}
