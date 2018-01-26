#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> l[27];
set<char> s;
bool cor[27];
void DFS(int v){
    cor[v]=1;
    s.insert(v+97);
    int t = l[v].size();
    for(int c1=0; c1<t; c1++)
        if(!cor[l[v][c1]])
            DFS(l[v][c1]);
}
int ptsConexas(int v){
    int pc, t;
    fill(cor, cor+27, 0);
    for(int c1=pc=0; c1<v; c1++)
        if(!cor[c1]){
            pc++;
            DFS(c1);
            t = s.size();
            for(set<char>::iterator it=s.begin(); it!=s.end(); it++)
                cout << *it << ",";
            printf("\n");
            s.clear();
        }
    return pc;
}
int main(){
    int n, v, e, x, y;
    char c, c2;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d %d", &v, &e);
        while(e--){
            scanf(" %c %c", &c, &c2);
            l[c-'a'].pb(c2-'a');
            l[c2-'a'].pb(c-'a');
        }printf("Case #%d:\n", i);
        e=ptsConexas(v);
        printf("%d connected components\n\n", e);
        for(int i=0; i<27; i++)
            l[i].clear();
    }
    return 0;
}
