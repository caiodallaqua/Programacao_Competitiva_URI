#include<bits/stdc++.h>
#define MAXV 4005
#define pb push_back
using namespace std;
map<string, int> mp;
vector<int> g[MAXV];
int m, n, vis[MAXV];
string s, s2;
int BFS(int ori, int des){
    if(ori==des) return 0;
    queue<int> q;
    int v, t;
    //vis[ori]=1;
    q.push(ori);
    while(!q.empty()){
        v = q.front();
        q.pop();
        t = g[v].size();
        for(int c1=0; c1<t; c1++)
            if(!vis[g[v][c1]]){
                vis[g[v][c1]] = vis[v]+1;
                if(g[v][c1]==des) return vis[g[v][c1]];
                q.push(g[v][c1]);
            }
    }
}
int main(){
    int a=0;
    scanf("%d %d", &n, &m);
    while(m--){
        cin >> s >> s2;
        if(!mp.count(s)){
            mp[s]=a;
            a++;
        }
        if(!mp.count(s2)){
            mp[s2]=a;
            a++;
        }
        g[mp[s]].pb(mp[s2]);
        g[mp[s2]].pb(mp[s]);
    }fill(vis, vis+n+3, 0);
    a = BFS(mp["Entrada"], mp["*"]);
    fill(vis, vis+n+3, 0);
    a += BFS(mp["*"], mp["Saida"]);
    printf("%d\n", a);
    return 0;
}
