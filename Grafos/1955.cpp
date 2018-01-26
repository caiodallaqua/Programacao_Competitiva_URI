#include<bits/stdc++.h>
#define MAXV 1005
#define pb push_back
using namespace std;
int n, p[MAXV];
bool b, vis[MAXV];
vector<int> g[MAXV];
int pcic(int v, int r){
    int ac=2;
    while(v!=r && v>-1){
        ac++;
        v=p[v];
    }
    return v<0?2:ac;
}
void DFS(int v){
    vis[v]=1;
    int t = g[v].size();
    for(int c1=0; c1<t; c1++)
        if(!vis[g[v][c1]]){
            p[g[v][c1]]=v;
            DFS(g[v][c1]);
        }else if(p[v]!=g[v][c1])
            if(pcic(p[v], g[v][c1])%2){
                b=1;
                return;
            }
}
int main(){
    int x;
    scanf("%d", &n);
    for(int c1=b=0; c1<n; c1++)
        for(int c2=0; c2<n; c2++){
            scanf("%d", &x);
            if(!x && c1<c2){
                g[c1].pb(c2);
                g[c2].pb(c1);
            }
        }
    fill(vis, vis+n+1, 0);
    p[0]=-1;
    DFS(0);
    printf("%s!\n", !b?"Bazinga":"Fail");

    return 0;
}
