#include<bits/stdc++.h>
#define pb push_back
#define MAXV 2005
using namespace std;
int n, m, v, w, p;
bool vis[MAXV];
vector<int> g[MAXV];
void DFS(int u){
    vis[u]=1;
    int t = g[u].size();
    for(int c1=0; c1<t; c1++)
        if(!vis[g[u][c1]])
            DFS(g[u][c1]);
}
bool fcn(){
    int ac;
    for(int c1=1; c1<=n; c1++){
        fill(vis, vis+n+1, 0);
        DFS(c1);
        for(int c2=1; c2<=n; c2++)
            if(!vis[c2]) return 0;
    }return 1;
}
int main(){
    while(scanf("%d %d", &n, &m)&&(n||m)){
        while(m--){
            scanf("%d %d %d", &v, &w, &p);
            g[v].pb(w);
            if(p==2) g[w].pb(v);
        }cout << fcn() << endl;
        for(int c1=0; c1<=n; c1++)
            g[c1].clear();
    }

    return 0;
}
