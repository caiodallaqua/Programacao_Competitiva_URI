#include<bits/stdc++.h>
int main(){
    int n, c1, x, v[2][27], ac, ac2;
    char c, s[10];
    while(scanf("%d", &n) && n){
        ac=0; ac2=0;
        for(c1=0; c1<27; c1++){
            v[0][c1]=-1;
            v[1][c1]=0;
        }
        for(c1=0; c1<n; c1++){
            scanf(" %c %d %s", &c, &x, s);
            if(!strcmp(s, "incorrect"))
                v[1][c-65]++;
            else{
                v[0][c-65]=x;
                ac++;
            }
        }for(c1=0; c1<26; c1++)
            if(v[0][c1]!=-1){
                ac2+=v[0][c1];
                ac2+=20*v[1][c1];
            }
        printf("%d %d\n", ac, ac2);
    }
    return 0;
}
