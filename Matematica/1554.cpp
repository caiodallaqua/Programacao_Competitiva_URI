#include<bits/stdc++.h>
int main(){
    int n, t, c1, bx, by, x, y, z, men;
    scanf("%d", &n);
    for(; n>0; n--){
        men=100000000;
        scanf("%d", &t);
        scanf("%d %d", &bx, &by);
        for(c1=1; c1<=t; c1++){
            scanf("%d %d", &x, &y);
            x=abs(bx-x);
            y=abs(by-y);
            if(10*sqrt(x*x+y*y)<men){
                men=10*sqrt(x*x+y*y);
                z=c1;
            }
        }printf("%d\n", z);
    }

    return 0;
}
