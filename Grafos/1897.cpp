#include<bits/stdc++.h>
#define pb push_back
#define ins insert
#define dbg printf("entrou\n")
#define MAXV 3000010
typedef unsigned long long llu;
using namespace std;
map <int, int> vis;
queue <int> q;
int i, j;
bool f(int u, int v){
    if(!vis.count(u)){
        vis[u]=vis[v]+1;
        q.push(u);
    }if(u==j) return 1;
    return 0;
}
void BFS(int v){
   vis[v]=0;
   q.push(v);
   bool b = 0;
   while(!q.empty()){
        int v = q.front();
        q.pop();
        b = f(v*2, v)||b;
        b = f(v*3, v)||b;
        b = f(v/2, v)||b;
        b = f(v/3, v)||b;
        b = f(v+7, v)||b;
        b = f(v-7, v)||b;
        if(b){
            cout << vis[j] << endl;
            break;
        }
   }
}

int main(){
    scanf("%d %d", &i, &j);
    BFS(i);


    return 0;
}
