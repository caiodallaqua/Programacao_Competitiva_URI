#include <stdio.h>
#include <string.h>
#define MAX 1001
int main(){
    int n, c1, c2, c3, c4, ac;
    char s[MAX], s2[MAX];
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        scanf("%s", s);
        scanf("%s", s2);
        c3 = strlen(s)-strlen(s2);
        c4 = 0;
        ac=0;
        for(c2=0; c2<strlen(s2); c2++, c3++, c4++)
            if(s[c3]==s2[c4])
                ac++;
        if(ac==strlen(s2))
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
    return 0;
}
