#include<bits/stdc++.h>

int main(){
    int n, c1, i, b, in[101], ne, c3, pos, qt, ac;
    unsigned long long int mini, d, ct, c2;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        mini=9000000000;ac=0;ct=0;
        scanf("%llu %d %d", &d, &i, &b);
        for(c2=0; c2<i; c2++)
            scanf("%d", &in[c2]);
        for(c2=0; c2<b; c2++){
            scanf("%d", &ne);ac=0;
            for(c3=0; c3<ne; c3++){
                scanf("%d %d", &pos, &qt);
                ac+=in[pos]*qt;
            }
            if(mini>ac){
                mini=ac;
            }
        }
        printf("%llu\n", d/mini);
        getchar();
    }
    return 0;
}
