#include<bits/stdc++.h>
int main(){
    int t, c1, n, c2, tt, a;
    bool flag;
    char s[101][51], c;
    scanf("%d", &t);
    for(c1=0; c1<t; c1++){
        flag=0;
        scanf("%d", &n);
        for(c2=0; c2<n; c2++)
            scanf("%s", s[c2]);
        getchar();
        for(c2=0; c2<n; c2++){
            tt=0; a=0;
            while(scanf("%c", &c) && c!='\n' && c!=' ')
                if(c!='M'){
                    tt++;
                    if(c=='A')
                        a++;
                }
            if((double)a*100/tt>25)
                if(!flag){
                    printf("%s", s[c2]);
                    flag=1;
                }else
                    printf(" %s", s[c2]);
            
        }
        printf("\n");
    }
    return 0;
}
