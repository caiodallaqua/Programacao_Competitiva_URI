#include<bits/stdc++.h>
#define MAXV 100005
#define vi vector<int>
#define pb push_back
using namespace std;
int cor[MAXV];
vi e[MAXV];//lista d adj
bool DFS(int v){
    int t;
    cor[v]=1;
    t=e[v].size();
    for(int c1=0; c1<t; c1++){
    if(cor[e[v][c1]]==1)
        return 1;
    if(!cor[e[v][c1]] && DFS(e[v][c1]))
        return 1;
    }cor[v]=2;
    return 0;
}
bool isCyclic(int n){
    fill(cor, cor+n+1, 0);
    for(int c1=1; c1<=n; c1++)//índ começa em 1 p/ linha e 0 p/ col
    if(!cor[c1])	      //vértices a partir d 1
        if(DFS(c1))
            return 1;
    return 0;
}
int main(){
    int t, n, m, a, b, c1, c2;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &m);
        while(m--){
            scanf("%d %d", &a, &b);
            e[a].pb(b);
        }
        if(isCyclic(n))
            printf("SIM\n");
        else
            printf("NAO\n");
        for(c1=0; c1<=n; c1++)
            e[c1].clear();
    }return 0;
}
