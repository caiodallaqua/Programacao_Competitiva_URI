#include<bits/stdc++.h>
int main(){
    int t, c1, c2, tam, ac;
    char s[10001], s2[10001];
    scanf("%d", &t);
    for(c1=0; c1<t; c1++){
        ac=0;
        scanf("%s", s);
        scanf("%s", s2);
        tam = strlen(s);
        for(c2=0; c2<tam; c2++)
            if(s[c2]<=s2[c2])
                ac+=s2[c2]-s[c2];
            else
                ac+=(122-s[c2])+(s2[c2]-96);
        printf("%d\n", ac);
    }
    return 0;
}
