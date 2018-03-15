#include<bits/stdc++.h>
#define debug printf("entrou\n")
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
using namespace std;
int main(){
    int n, c1, t;
    char s[1002];
    scanf("%d", &n);
    while(n--){
        scanf(" %[^\n]s", s);
        t=strlen(s);
        for(c1=0; c1<t; c1++)
            if((s[c1]>64 && s[c1]<91)||(s[c1]>96 && s[c1]<123))
                s[c1]+=3;
        reverse(s, s+t);
        for(c1=t/2; c1<t; c1++)
            s[c1]-=1;
        printf("%s\n", s);
    }return 0;
}
