#include<bits/stdc++.h>
using namespace std;
int v[100005];
int updt(int ind, int valor, int tam){
    if(ind>tam)
        return 0;
    v[ind]+=valor;
    ind+=ind & -ind;
    return updt(ind, valor, tam);
}
int pegaVal(int ind){
    int ac=0;
    while(ind>0){
        ac+=v[ind];
        ind-=ind & -ind;
    }
    return ac;
}
int main(){
    int n, c1, x[100005], y;
    char c;
    scanf("%d", &n);
    fill(v, v+n, 0);
    for(c1=1; c1<=n; c1++){
        scanf("%d", &x[c1]);
        updt(c1, x[c1], n);
    }while(scanf(" %c %d", &c, &y)>0)
        if(c=='a')
            updt(y, -x[y], n);
        else
            printf("%d\n", pegaVal(y-1));
    return 0;
}
