#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c1, c2, ac, ac2;
    char s[51];
    while(scanf("%s", s)!=EOF){
        scanf("%d", &n);
        ac=0;ac2=0;
        c1=0;
        while(c1<strlen(s)){
        	while(s[c1]=='R'){
            		ac2++;
            		if(ac2==n || s[c1+1]=='W' || c1==strlen(s)-1){ac++; ac2=0;}
            		c1++;
        	}
        	while(s[c1]=='W'){
            		ac++;
            		c1++;
        	}
	}
        printf("%d\n", ac);
    }
    return 0;
}
