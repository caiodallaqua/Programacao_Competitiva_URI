#include<bits/stdc++.h>
int main(){
    long double l;
    while(scanf("%Lf", &l) && l){
        printf("%.6Lf\n", ((long double)(2*l-3)-l)/l);
    }
    return 0;
}
