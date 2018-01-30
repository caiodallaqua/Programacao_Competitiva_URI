#include<bits/stdc++.h>
#define MAX 101
using namespace std;
int main(){
    int n, c1, c2, v[MAX], x, y, ac;
    while(scanf("%d", &n)!=EOF){
        ac=0;
        fill(v, v+MAX, 0);
        for(c1=0; c1<n; c1++){
            scanf("%d %d", &x, &y);
            for(c2=x; c2<=y; c2++)
                v[c2]++;
        }scanf("%d", &x);
        if(v[x]){
            for(c1=1; c1<x; c1++)
                ac+=v[c1];
            printf("%d found from %d to %d\n", x, ac, ac+v[x]-1);
        }else
            printf("%d not found\n", x);
    }
    return 0;
}

