#include<bits/stdc++.h>
using namespace std;
int main(){
    int c1, tam, flag;
    char d, s[101];
    while(1){
    	d = getchar();
    	scanf("%s", s);
    	c1=0;tam = strlen(s);
    	if(d=='0'&&tam==1&&s[0]=='0')return 0;
    	flag = 0;
    	while(c1<tam){
        	if(s[c1]!=d&&s[c1]!='0')flag=1;
        	if(flag&&s[c1]!=d)
            		printf("%c", s[c1]);
        	c1++;
    	}
	if(!flag)printf("0");
    	printf("\n");
    	strcpy(s, "");
    	getchar();
    }
    return 0;
}
