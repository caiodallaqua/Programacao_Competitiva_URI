#include<bits/stdc++.h>
#define MAX 53
using namespace std;
int LCScont(char *s, char *v){
    char m[MAX][MAX];
    int i, j, maior;
    for(i=maior=0; s[i]; i++)
        for(j=0; v[j]; j++)
            if(s[i] != v[j])
                m[i][j]=0;
            else{
                if(!i || !j)
                    m[i][j]=1;
                else
                    m[i][j]=m[i-1][j-1]+1;
                if(m[i][j] > maior) maior=m[i][j];
            }
    return maior;
}
int main(){
    int m;
    char s[52], s2[52];
    while(scanf(" %[^\n]s", s)>0){
        scanf(" %[^\n]s", s2);
        m=LCScont(s, s2);
        printf("%d\n", m);
    }return 0;
}
