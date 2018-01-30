#include<bits/stdc++.h>
using namespace std;
bool f(pair<int, string> x, pair<int, string> y){return x.first>y.first;}
int main(){
    vector< pair<int, string> > v;
    pair<int, string> p;
    char s[5000], c;
    int n, t;
    scanf("%d", &n);
    for(; n>0; n--){
        while(scanf(" %s%c", s, &c)){
            p.first=strlen(s);
            p.second=s;
            v.push_back(p);
            fill(s, s+strlen(s), '\0');
            if(c=='\n')
                break;
        }stable_sort(v.begin(), v.end(), f);
        t=v.size();
        for(int c1=0; c1<t; c1++){
            if(c1)
                printf(" ");
            cout << v[c1].second;
        }
        printf("\n");
        v.clear();
    }
    return 0;
}
