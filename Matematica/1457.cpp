#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, tam, c1, c2, c3, k, t;
    unsigned long long int ac;
    char s[50], s2[50], c;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){fill(s2, s2+50, '\0');fill(s, s+50, '\0');
        scanf(" %[^\n]s", s);
        tam=strlen(s);c3=0;
        while(c3<tam&&s[c3]!='!')
            c3++;
        for(c2=0; c2<c3; c2++)
            s2[c2]=s[c2];
        k=tam-strlen(s2);
        t = atoi(s2);ac=t;c2=1;
        while(t-(c2*k)>=1){
            ac*=(t-(c2*k));
            c2++;
        }printf("%llu\n", ac);

    }
    return 0;
}
