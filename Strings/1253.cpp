#include<bits/stdc++.h>
int main(){
    int n, c1, x, c2;
    char s[100];
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        scanf("%s", s);
        scanf("%d", &x);
        for(c2=0; c2<strlen(s); c2++)
            if(s[c2]-x<65)
                printf("%c", s[c2]-x+26);
            else
                printf("%c", s[c2]-x);
        printf("\n");
    }
    return 0;
}
