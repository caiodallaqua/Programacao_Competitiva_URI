#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<string>
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<math.h>
#define pb push_back
#define debug printf("entrou\n")
#define mkp make_pair
#define all(c) (c).begin(), (c).end()
typedef unsigned long long ull;
using namespace std;
bool f(pair< pair<int, string>, pair<int, double> > p, pair< pair<int, string>, pair<int, double> > p2){
    if(p.first.first!=p2.first.first)
        return p.first.first>p2.first.first;
    if(p.second.first!=p2.second.first)
        return p.second.first<p2.second.first;
    if(p.second.second>p2.second.second || p.second.second<p2.second.second)
        return p.second.second<p2.second.second;
    if(p.first.second!=p2.first.second)
        return p.first.second<p2.first.second;
}
int main(){
    int t, n, m, c1, c2, p, i;
    string s;
    double h;
    pair<int, string> pis;
    pair<int, double> pid;
    pair< pair<int, string>, pair<int, double> > pp;
    vector< pair< pair<int, string>, pair<int, double> > > vpp;
    scanf("%d", &t);c1=0;
    for(c1=1; c1<=t; c1++){
        scanf("%d %d", &n, &m);
        while(n--){
            cin >> s >> p >> i >> h;
            pis=mkp(p, s);
            pid=mkp(i, h);
            pp=mkp(pis, pid);
            vpp.push_back(pp);
        }sort(all(vpp), f);
        printf("CENARIO {%d}\n", c1);
        for(c2=1; c2<=m; c2++)
            cout << c2 << " - " << vpp[c2-1].first.second << endl;
        vpp.clear();
    }
    return 0;
}
