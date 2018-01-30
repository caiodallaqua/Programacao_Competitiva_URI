#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, c1, c2, ac, ac2, tam;
    string c, cc, ccc, cccc;
    map<string, string> arv;
    map<string, string>::iterator it;
    while(scanf("%d", &n) && n){ac2=0;
        for(c1=0; c1<n; c1++){
            cin >> c;
            cin >> cc;
            arv.insert(pair<string, string>(c, cc));
        }
        scanf("%d", &m);
        for(c1=0; c1<m; c1++){ac=0;
            cin >> c;
            cin >> cc;
            it=arv.find(c);
            if(it->second != cc){
                tam=cc.size();
                for(c2=0; c2<tam; c2++)
                    if(cc[c2]!=it->second[c2])
                        ac++;
                if(ac>1)
                    ac2++;
            }
        }printf("%d\n", ac2);
    }
    return 0;
}
