#include<bits/stdc++.h>
#define debug printf("entrou\n")
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
using namespace std;
int main(){
    int n, t;
    char s[1002];
    set<char> c;
    scanf("%d", &n);
    while(n--){
        scanf(" %[^\n]s", s);
        t=strlen(s);
        for(int c1=0; c1<t; c1++)
            if((s[c1]>64 && s[c1]<91)||(s[c1]>96 && s[c1]<123))
                c.insert(s[c1]);
        if(c.size()==26)
            printf("frase completa\n");
        else if(c.size()>12)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
        c.clear();
    }return 0;
}
