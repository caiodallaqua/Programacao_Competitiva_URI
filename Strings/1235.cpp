#include<bits/stdc++.h>
int main(){
    int n, c1, c2, tam;
    char p[101];
    scanf("%d", &n);
    getchar();
    for(c1=0; c1<n; c1++){
        scanf("%[^\n]s", p);
        getchar();
        tam = strlen(p);
        for(c2=(tam/2)-1; c2>=0; c2--)
            printf("%c", p[c2]);
        for(c2=tam-1; c2>=tam/2; c2--)
            printf("%c", p[c2]);
        printf("\n");
    }
    return 0;
}
