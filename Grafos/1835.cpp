#include<bits/stdc++.h>
#define pb push_back
using namespace std;
bool visit[105];
vector<int> vi[105];
void DFS(int v){
    visit[v]=1;
    int t = vi[v].size();
    for(int c1=0; c1<t; c1++)
        if(!visit[vi[v][c1]])
            DFS(vi[v][c1]);
}
int main(){
    int t, n, m, x, y;
    scanf("%d", &t);
    for(int c2=1; c2<=t; c2++){
        scanf("%d %d", &n, &m);
        for(int c3=0; c3<m; c3++){
            scanf("%d %d", &x, &y);
            vi[x].pb(y);
            vi[y].pb(x);
        }
        printf("Caso #%d: ", c2);
        y=0;
        for(int c1=1; c1<=n; c1++)
            if(!visit[c1]){
                DFS(c1);
                y++;
            }
        if(y<2) printf("a promessa foi cumprida\n");
        else  printf("ainda falta(m) %d estrada(s)\n", y-1);
        for(int c1=0; c1<=n; c1++){
            vi[c1].clear();
            visit[c1]=0;
        }
    }
    return 0;
}
