#include<bits/stdc++.h>
using namespace std;
int h, l, m[200][200], r = INT_MAX, ac;
bool vis[200][200];
void DFS(int i, int j){
	vis[i][j] = 1;
	ac++;
	if(i && m[i-1][j]==m[i][j] && !vis[i-1][j])
		DFS(i-1, j);
	if(j && m[i][j-1]==m[i][j] && !vis[i][j-1])
		DFS(i, j-1);
	if(i<h-1 && m[i+1][j]==m[i][j] && !vis[i+1][j])
		DFS(i+1, j);
	if(j<l-1 && m[i][j+1]==m[i][j] && !vis[i][j+1])
		DFS(i, j+1);
}
int main(){
	scanf("%d %d", &h, &l);
	for(int c1=0; c1<h; c1++)
		for(int c2=0; c2<l; c2++){
			scanf("%d", &m[c1][c2]);
			vis[c1][c2] = 0;
		}
	for(int c1=0; c1<h; c1++)
		for(int c2=0; c2<l; c2++)
			if(!vis[c1][c2]){
				ac = 0;
				DFS(c1, c2);
				r = min(r, ac);
				if(r==1) {c2=l; c1=h;}
			}
	printf("%d\n", r);
	return 0;
}
