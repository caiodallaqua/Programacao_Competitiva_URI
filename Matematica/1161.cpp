#include<stdio.h>

int main(){
    int n, c1, x, y;
    unsigned long long int v[21];
    v[0]=1;
    for(c1=1; c1<=20; c1++)
        v[c1] = c1*v[c1-1];
    while(scanf("%d%d", &x, &y) != EOF)
        printf("%llu\n", v[x]+v[y]);
    return 0;
}
