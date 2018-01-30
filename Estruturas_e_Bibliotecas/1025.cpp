#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
	int n, q, x, c1=1;
	vector<int> v;
	vector<int>::iterator it;
	while(scanf("%d %d", &n, &q) && (n&&q)){
		while(n--){
			scanf("%d", &x);
			v.pb(x);
		}sort(v.begin(), v.end());
		printf("CASE# %d:\n", c1);
		while(q--){
			scanf("%d", &x);
			it=find(v.begin(), v.end(), x);
			if(it==v.end())
				printf("%d not found\n", x);
			else
				cout << x << " found at " << it-v.begin()+1 << endl;
		}v.clear();
		c1++;
	}
	return 0;
}
