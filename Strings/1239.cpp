#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[51];
    int tam, c1, c2, c3;
    while(scanf("%[^\n]s", s)!=EOF){getchar();
        tam=strlen(s);
        for(c1=c2=c3=1; c1<=tam; c1++){
            if(s[c1-1]=='_'){
                if(c2%2)
                    printf("<i>");
                else
                    printf("</i>");
                c2++;
            }else if(s[c1-1]=='*'){
                if(c3%2)
                    printf("<b>");
                else
                    printf("</b>");
                c3++;
            }else
                printf("%c", s[c1-1]);
        }printf("\n");
    }
    return 0;
}
