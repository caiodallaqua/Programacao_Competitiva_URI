#include<bits/stdc++.h>
int main(){
    int n, c1, c2, v[27], m;
    char c;
    scanf("%d ", &n);
    for(c1=0; c1<n; c1++){
        for(c2=0; c2<27; c2++)
            v[c2]=0;
        while(scanf("%c", &c) && c!='\n')
           if((c>=65 && c<=90)||(c>=97 && c<=122)){
                c=tolower(c);
                v[c-97]++;
           }m=0;
        for(c2=0; c2<27; c2++)
                if(v[c2]>m)
                    m=v[c2];
        for(c2=0; c2<27; c2++)
            if(v[c2]==m)
                printf("%c", c2+97);
        printf("\n");
    }
    return 0;
}
