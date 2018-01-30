#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, tam, tam2, c1, c2;
    string s, s2;
    scanf("%d", &t);
    while(t--){
        cin >> s;
        tam=s.size();
        scanf("%d", &n);
        while(n--){
            cin >> s2;
            tam2=s2.size();
            for(c1=c2=0; c1<tam && c2<tam2; c1++)
                if(s[c1]==s2[c2])
                    c2++;
            if(c2==tam2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }return 0;
}
