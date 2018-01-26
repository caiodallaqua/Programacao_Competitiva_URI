#include<bits/stdc++.h>
#define mkp make_pair
#define pb push_back
#define fir first
#define sec second
#define ins insert
#define MAXV 2005
#define MAXE 2005
#define INF INT_MAX
#define pii pair<int, int>
typedef unsigned long long ull;
using namespace std;
int sbs[MAXV], n, m;
pair< int, pii >  g[MAXE];
vector< pair< int, pii > > mst;
int find(int v){return sbs[v]==-1?v:find(sbs[v]);}
void uni(int v1, int v2){
        v1 = find(v1);
        v2 = find(v2);
        sbs[v1] = v2;
}
ull kruskal(){
        ull res = 0;
        fill(sbs, sbs+n, -1);
        sort(g, g+m);
        for(int c1=0; c1<m; c1++){
                int v1 = find(g[c1].sec.fir);
                int v2 = find(g[c1].sec.sec);
                if(v1 != v2){ //no cycle
                        res += g[c1].fir;
                        mst.pb(g[c1]);
                        uni(v1, v2); //subsets union
                }
        }
        return res;
}
int main(){
        int x, y, z, c;
        scanf("%d %d", &n, &m);
        for(int c=0; c<m; c++){
               scanf("%d %d %d", &x, &y, &z);
 	       g[c] = mkp(z, mkp(x,y));
        }printf("%llu\n", kruskal()); 
        return 0;
}

