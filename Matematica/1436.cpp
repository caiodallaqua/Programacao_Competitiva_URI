#include<stdio.h>
int main(){
    int n, c, c1, id, t;
    scanf("%d", &t);
    for(c=0; c<t; c++){
    scanf("%d", &n);
    for(c1=1; c1<=n; c1++){
        scanf("%d", &id);
        if((n/2)+1==c1)
            printf("Case %d: %d\n", c+1,id);
    }
    }
    return 0;
}
