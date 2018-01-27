#include<bits/stdc++.h>
typedef unsigned long long int llu;
int main(){
    llu v;
    int n, c1;
    while(scanf("%d", &n)>0)
        for(c1=v=1; c1<=10000; c1++)
            if(v%n==0){
                printf("%d\n", c1);
                c1=10001;
            }else if(v>100000000000000000)
                v=((((10%n)*(v%n))%n)+(1%n))%n;
            else
                v=10*v+1;
    return 0;
}
