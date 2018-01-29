#include<stdio.h>
int ac=0;
int fib(int x){
    if(x==0)return 0;
    else if(x==1)return 1;
    else{
        ac+=2;
        return fib(x-1)+fib(x-2);
    }
}
int main(){
    int n, c1, x, r;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        scanf("%d", &x);
        ac = 0;
        r = fib(x);
        printf("fib(%d) = %d calls = %d\n", x, ac, r);
    }

    return 0;
}
