#include<bits/stdc++.h>
bool myfunction (int i,int j) { return (i<j); }
using namespace std;

int main(){
    int a, c1, s, c, r, c2, c3, i, f, i2, f2, v;
    vector<int> vl;
    double  m, ac,  ac2;
    vector<double> t;
    scanf("%d", &a);
    for(c1=0; c1<a; c1++){
        scanf("%d %d %d", &s, &c, &r);
        ac2=0;
        for(c2=0; c2<s; c2++){
            scanf("%d",&v);
            vl.push_back(v);
            t.push_back(1.0/v);
            ac2+=t[c2];
        }
        if(c==0)printf("%.2lf\n", ac2);
        else{
            sort(vl.begin(), vl.end(), myfunction);
            for(c2=0; c2<c; c2++)
                vl[c2]+=r;
            ac=0.0;
            for(c2=0; c2<s; c2++)
                ac+=(1.0)/vl[c2];
            printf("%.2lf\n", ac);
        }
        vl.clear();
        t.clear();
    }
    return 0;
}
