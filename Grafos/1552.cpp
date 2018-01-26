
#include<bits/stdc++.h>
#define mkp make_pair
#define pb push_back
#define fir first
#define sec second
#define ins insert
#define MAXV 200005
#define MAXE 200005
#define INF INT_MAX
#define pii pair<int, int>
typedef unsigned long long ull;
using namespace std;
int sbs[MAXV], n, m;
pair< double, pii >  g[MAXE];
int find(int v){return sbs[v]==-1?v:find(sbs[v]);}
void uni(int v1, int v2){
        v1 = find(v1);
        v2 = find(v2);
        sbs[v1] = v2; 
}
double kruskal(){
        double res = 0;
        fill(sbs, sbs+n, -1);
        sort(g, g+m);
        for(int c1=0; c1<m; c1++){
                int v1 = find(g[c1].sec.fir);
                int v2 = find(g[c1].sec.sec);
                if(v1 != v2){ //no cycle
                        res += g[c1].fir;
                        uni(v1, v2); //subsets union
                }
        }
        return res;
}
double dist(int x1, int y1, int x2, int y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main(){
        int x, y, c, l, r;
	vector< pair<int, pii > > q;
        ull tt; 
	scanf("%d", &r);
        while(r--){
		scanf("%d", &n);
		m = n*(n-1)/2;
                for(int c1=c=l=0; c1<n; c1++, l++){
                        scanf("%d %d", &x, &y);
			for(int c2=0; c2<q.size(); c2++, c++)
                        	g[c] = mkp(dist(x,y,q[c2].sec.fir,q[c2].sec.sec), mkp(l,q[c2].fir));
			q.pb(mkp(l,mkp(x,y)));
                }printf("%.2lf\n", kruskal()/100);
       		q.clear();	
       	}
        return 0;
}

