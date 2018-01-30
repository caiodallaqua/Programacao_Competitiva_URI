#include<bits/stdc++.h>
int main(){
    char s[1005];
    int t, c1, ac;
    while(scanf(" %[^\n]s", s)>0){
        t=strlen(s);
        for(c1=ac=0; c1<t; c1++){
            if(s[c1]=='(')
                ac++;
            else if(s[c1]==')')
                ac--;
            if(ac<0)
                break;
        }printf("%scorrect\n", ac?"in":"");
    }
    return 0;
}
