#include<bits/stdc++.h>
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define ins insert
#define fir first
#define sec second
#define vi vector<int>
#define dbg printf("entrou\n")
#define mkp make_pair
typedef unsigned long long int ulli;
using namespace std;
int main(){
    map<string, int> msi;
    int n, k;
    double d, t;
    string s;
    scanf("%d", &n);
    scanf(" ");
    k=n;
    while(n--){t=0;
        while(getline(cin, s)){
            if(s.size()==0)
                break;
            if(msi.find(s)==msi.end())
                msi.ins(pair<string, int>(s, 1));
            else
                msi.find(s)->sec++;
            t=t+1;
        }
        for(map<string, int>::iterator it=msi.begin(); it!=msi.end(); it++){
            cout << it->fir;
            printf(" %.4lf\n", (100.0*it->sec)/t);
        }msi.clear();
        if(n)
            printf("\n");
    }
    return 0;
}
