#include<stdio.h>

int main(){
    int n, c1, d;
    double c;
    scanf("%d\n", &n);
    for(c1=0; c1<n; c1++){
        scanf("%lf", &c);
        d=0;
        while(c>1){
            c/=2;
            d++;
        }
        printf("%d dias\n", d);
    }
    return 0;
}

