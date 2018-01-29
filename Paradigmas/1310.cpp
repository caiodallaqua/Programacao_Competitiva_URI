#include<stdio.h>
int main(){
    int i, x, maxAtual, maxTotal;
    unsigned short int n, c1;
    while(scanf("%hu", &n)!=EOF){
        scanf("%d", &i);maxAtual=0;maxTotal=-1;
        for(c1=0; c1<n; c1++){
            scanf("%d", &x);
            maxAtual+=x-i;
            if(maxAtual<0)
                maxAtual=0;
            if(maxAtual>maxTotal)
                maxTotal=maxAtual;
        }printf("%d\n", maxTotal);
    }
    return 0;
}
