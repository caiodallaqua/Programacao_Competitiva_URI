#include<bits/stdc++.h>
int main(){
    int n, x, c2, c1, flag;
    unsigned long long int v, f;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        scanf("%d", &x);
        v=0;flag=0;
        if(x==64){
            v=1537228672809129;
        }
        else{
            for(c2=0; c2<x; c2++){
                v+=pow(2, c2);
            }
            v=v*(1.0/12.0)*0.001;
        }
        printf("%llu kg\n", v);
    }
    return 0;
}
