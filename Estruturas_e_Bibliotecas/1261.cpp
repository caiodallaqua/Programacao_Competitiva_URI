#include<bits/stdc++.h>
#define pb push_back
using namespace std;
bool f(int x, int y){return (x<y);}
int main(){
    int n, n2, c1, x;
    unsigned long long int ac;
    map<string, int> m;
    char s[100];
    scanf("%d %d", &n, &n2);
    while(n--){
        scanf(" %s %d", s, &x);
        m.insert(pair<string, int>(s, x));
    }ac=0;
    while(scanf(" %s", s)){
        if(strlen(s)==1&&s[0]=='.'){
            printf("%llu\n", ac);
            n2--;
            ac=0;
        }
        if(m.find(s)!=m.end())
            ac+=m.find(s)->second;
        if(!n2)
            return 0;
    }
    return 0;
}
