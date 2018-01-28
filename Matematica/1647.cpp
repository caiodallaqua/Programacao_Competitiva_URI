#include<bits/stdc++.h>
int main(){
    unsigned long long v[51], ac;
    int n, c1, c2, x;
    while(scanf("%d", &n) && n!=0){
        for(c1=1; c1<=n; c1++){
            scanf("%llu", &v[c1]);
        }
        x=n;ac=0;
        for(c2=0; c2<x; c2++){
            for(c1=n-1; c1>0; c1--){
                v[c1]=v[c1]+v[n];
            }ac+=v[n];v[n]=0;n--;
        }printf("%llu\n", ac);
    }
    return 0;
}
