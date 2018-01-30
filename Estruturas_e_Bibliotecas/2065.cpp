#include<bits/stdc++.h>
using namespace std;
class f{
public:
	bool operator()(pair<int, int> p, pair<int, int> p2){
		if(p.first!=p2.first) return p.first>p2.first;
		return p.second>p2.second;
	}
};
int n, m, x;
queue<int> cli;
priority_queue< pair<int, int>, vector< pair<int, int> >, f> cai;
map<int, int> mp;
int main(){
	pair<int, int> p;
	scanf("%d %d", &n, &m);
	for(int c1=1; c1<=n; c1++){
		scanf("%d", &x);
		cai.push(make_pair(0, c1));
		mp[c1]=x;
	}for(int c1=1; c1<=m; c1++){
		scanf("%d", &x);
		cli.push(x);
	}while(!cli.empty()){
		int c = cli.front();
		cli.pop();
		p = cai.top();
		cai.pop();
		p.first += mp[p.second]*c;
		cai.push(p);
	}n = 0;
	while(!cai.empty()){
		p = cai.top();
		cai.pop();
		n = n<p.first ? p.first:n;
	}
	printf("%d\n", n);
	return 0;
}
