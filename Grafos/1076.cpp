#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> ver[60];
int t, n, v, a, x, y, ac;
bool m[60];
void DFScount(int i){
    m[i]=1;
    ac++;
    int t = ver[i].size();
    for(int c1=0; c1<t; c1++)
        if(!m[ver[i][c1]])
            DFScount(ver[i][c1]);
}
int main(){
    scanf("%d", &t);
    while(t--){ac=0;
        scanf("%d %d %d", &n, &v, &a);
        fill(m, m+60, 0);
        while(a--){
            scanf("%d %d", &x, &y);
            ver[x].pb(y);
            ver[y].pb(x);
        }
        DFScount(n);
        printf("%d\n", 2*(ac-1));
        for(int c1=0; c1<60; c1++)
            ver[c1].clear();
    }
    return 0;
}
