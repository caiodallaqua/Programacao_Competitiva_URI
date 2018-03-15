#include<bits/stdc++.h>
#define debug printf("entrou\n")
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
using namespace std;
int main(){
    int n, m, a, b, t, c1, c2, c3, c4;
    char s[51][51];
    while(scanf("%d %d", &n, &m) && (n||m)){getchar();
        for(c1=0; c1<n; c1++){
            for(c2=0; c2<m; c2++)
                if(c2<m-1)
                    scanf("%c", &s[c1][c2]);
                else
                    scanf("%c ", &s[c1][c2]);
        }scanf("%d %d", &a, &b);
        for(c1=0; c1<n; c1++)
            for(c3=0; c3<a/n; c3++){
                for(c2=0; c2<m; c2++)
                    for(c4=0; c4<b/m; c4++)
                        printf("%c", s[c1][c2]);
                printf("\n");
            }
        printf("\n");
        for(c1=0; c1<n; c1++)
            fill(s[c1], s[c1]+m, '\0');
    }
    return 0;
}

