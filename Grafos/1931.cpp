#include<bits/stdc++.h>
#define pb push_back
#define mkp make_pair
#define NV 10005
#define NA 50005
#define INF (1<<30)
#define pii pair<int, int>
using namespace std;
int dist[NV];
bool visitados[NV];
vector< pair<int, int> > vi[NV], adj[NV];
    int dijkstra(int ori, int dest){
        priority_queue< pii, vector< pii >, greater< pii > > pq;
        for(int c1=0; c1<NV+1; c1++){
            dist[c1] = INF;
            visitados[c1] = 0;
        }
        dist[ori] = 0;
        pq.push(mkp(dist[ori], ori));
        while(!pq.empty()){
            pii p = pq.top();
            int u = p.second;
            pq.pop();
            if(!visitados[u]){
                visitados[u] = 1;
                vector< pii >::iterator it;
                for(it=adj[u].begin(); it!=adj[u].end(); it++){
                    int v = it->first;
                    int custo_aresta = it->second;
                    if(dist[v]>dist[u]+custo_aresta){
                        dist[v]=dist[u]+custo_aresta;
                        pq.push(mkp(dist[v], v));
                    }
                }
            }
        }
        return dist[dest];
    }
int main(){
    int n, m, x, y, z;
    scanf("%d %d", &n, &m);
    for(int c1=0; c1<m; c1++){
        scanf("%d %d %d", &x, &y, &z);
        vi[x].pb(mkp(y, z));
        vi[y].pb(mkp(x, z));
    }
    for(int c1=1; c1<=n; c1++){
        z = vi[c1].size();
        for(int c2=0; c2<z; c2++){
            y = vi[vi[c1][c2].first].size();
            for(int c3=0; c3<y; c3++)
                adj[c1].pb(mkp(vi[vi[c1][c2].first][c3].first, vi[vi[c1][c2].first][c3].second+vi[c1][c2].second));
        }
    }
    unsigned long long i = dijkstra(1, n);
    if(i!=INF) printf("%llu\n", i);
    else printf("-1\n");
    for(int c1=0; c1<=n; c1++)
        adj[c1].clear();
    return 0;
}
