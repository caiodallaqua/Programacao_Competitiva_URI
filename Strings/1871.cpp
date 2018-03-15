#include<bits/stdc++.h>
#include<strstream>
using namespace std;
int main(){
    int a, b, c;
    while(scanf("%d %d", &a, &b)!=EOF){
    	if(a==0&&b==0)return 0;
    	c=a+b;
    	stringstream ss;
    	ss << c;
    	string s = ss.str();
    	for(a=0; a<s.size(); a++)
        	if(s[a]!='0')
            		printf("%c", s[a]);
    	printf("\n");
    	s.clear();
    	ss.clear();
    }
    return 0;
}
