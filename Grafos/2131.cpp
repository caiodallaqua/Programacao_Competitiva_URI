#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> g[101];
bool vis[101], cor[101], b;
int n, m, x, y;
void DFS(int v, bool c){
	vis[v]=1;
	cor[v]=!c;
	int t = g[v].size();
	for(int c1=0; c1<t; c1++)
		if(!vis[g[v][c1]]) DFS(g[v][c1], cor[v]);
		else if(cor[v]==cor[g[v][c1]]) b = 1;
}
int main(){int o = 1;
	while(scanf("%d %d", &n, &m)>0){
		while(m--){
			scanf("%d %d", &x, &y);
			g[x].pb(y);
			g[y].pb(x);
		}fill(vis, vis+n+1, 0);
		b = 0;
		DFS(1,1);
		printf("Instancia %d\n%s\n\n", o, !b?"sim":"nao");
		for(int c1=0; c1<=n; c1++) g[c1].clear();
		o++;
	}
	return 0;
}

