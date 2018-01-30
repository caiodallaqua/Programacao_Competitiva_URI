#include<bits/stdc++.h>
#define debug printf("entrou\n")
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;
typedef vector<int> vi;
typedef map<string, double> msd;
using namespace std;
int main(){
    int t, n, c1;
    string s;
    double d, ac;
    msd m;
    scanf("%d", &t);
    while(t--){ac=0;
        scanf("%d", &n);
        while(n--){
            cin >> s >> d;
            m.insert(pair<string,double>(s,d));
        }scanf("%d", &n);
        while(n--){
            cin >> s >> c1;
            if(m.find(s)!=m.end())
                ac+=(m.find(s)->second)*c1;
        }printf("R$ %.2lf\n", ac);
        m.clear();
    }return 0;
}

