#include<bits/stdc++.h>
unsigned long long int c1, v[41];

unsigned long long int fib(unsigned long long int n){
    if(n==1)return v[1];
    else if(n==2)return v[2];
    else
        return v[n]=(fib(n-1)+v[n-2]);
}
int main(){
    int n;
    v[1]=1;
    v[2]=2;
    fib(40);
    while(scanf("%d", &n) && n)
        printf("%llu\n", v[n]);

    return 0;
}
