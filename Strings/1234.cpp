#include<bits/stdc++.h>
#define debug printf("entrou\n")
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;
typedef vector<int> vi;
typedef map<string, double> msd;
using namespace std;
int main(){
    int t, c1, c2;
    char s[53];
    while(scanf("%[^\n]s", s)>0){getchar();
        t=strlen(s);
        for(c1=0, c2=1; c1<t; c1++)
            if(s[c1]>64 && s[c1]<91){
                if(c2%2==0)
                    printf("%c", tolower(s[c1]));
                else
                    printf("%c", s[c1]);
                c2++;
            }else if(s[c1]>96 && s[c1]<123){
                if(c2%2)
                    printf("%c", toupper(s[c1]));
                else
                    printf("%c", s[c1]);
                c2++;
            }else
                printf("%c", s[c1]);
        printf("\n");
    }return 0;
}

