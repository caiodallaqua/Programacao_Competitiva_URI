#include<bits/stdc++.h>
using namespace std;
bool f(pair<int, char> p, pair<int, char> p2){
    if(p.first==p2.first)
        return p.second>p2.second;
    return p.first<p2.first;
}
int main(){
    char s[1001], c;
    int c1, tam;
    bool b=0;
    set<char> cc;
    set<char>::iterator it;
    pair<int, char> pp;
    vector< pair<int, char> > p;
    while(scanf(" %[^\n]s", s)>0){
        b?printf("\n"):b=1;
        tam=strlen(s);
        sort(s, s+tam);
        for(c1=0; c1<tam; c1++)
            cc.insert(s[c1]);
        for(c1=0, it=cc.begin(); it!=cc.end(); it++){
            pp=make_pair(0, (int)*it);
            while(c1<tam && s[c1]==*it){
                pp.first++;
                c1++;
            }p.push_back(pp);
        }sort(p.begin(), p.end(), f);
        tam=p.size();
        for(c1=0; c1<tam; c1++)
            printf("%d %d\n", p[c1].second, p[c1].first);
        p.clear(); cc.clear();
    }
    return 0;
}

