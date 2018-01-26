#include<bits/stdc++.h>
#define MAXV 260
#define pb push_back
#define mkp make_pair
#define pii pair<int, int>
using namespace std;
vector< pii > g[MAXV];
int path[MAXV], n, m, c, k, ma[MAXV][MAXV];
bool vis[MAXV];
int dijkstra(int ori, int dest){
    int dist[MAXV], mn = INT_MAX, a;
    priority_queue< pii, vector< pii >, greater< pii > > pq;
    for(int c1=0; c1<n+1; c1++){
        dist[c1] = INT_MAX;
        vis[c1] = 0;
        path[c1] = -1;
    }
    dist[ori] = 0;
    pq.push(mkp(dist[ori], ori));
    while(!pq.empty()){
        pii p = pq.top();
        int u = p.second;
        pq.pop();
        if(!vis[u]){
            vis[u] = 1;
            vector< pii >::iterator it;
            for(it=g[u].begin(); it!=g[u].end(); it++){
                int v = it->first;
                int custo = it->second;
                if(dist[v]>dist[u]+custo){
                    if(u>=c || (u<c && u+1==v)){
                        dist[v]=dist[u]+custo;
                        pq.push(mkp(dist[v], v));
                    }
                }
            }
        }
    }
    return dist[dest];
}
int main(){
    int u, v, p;
    while(scanf("%d %d %d %d", &n, &m, &c, &k)&&n){
        while(m--){
            scanf("%d %d %d", &u, &v, &p);
            ma[u][v]=ma[v][u]=p;
            g[u].pb(mkp(v, p));
            g[v].pb(mkp(u, p));
        }
        printf("%d\n", dijkstra(k, c-1));
        for(int c1=0; c1<=n; c1++)
            g[c1].clear();
    }
    return 0;
}
