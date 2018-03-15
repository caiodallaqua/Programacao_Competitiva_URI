#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c1, c2;
    char c, s[51], l;
    scanf("%d ", &n);
    for(c1=0; c1<n; c1++){
        c2=0;l=' ';fill(s, s+51, '\0');
        while(scanf("%c", &c) && c!='\n'){
            if(c!=' ' && l==' '){
                s[c2]=c;
                c2++;
            }l=c;
        }printf("%s\n", s);
    }
    return 0;
}
