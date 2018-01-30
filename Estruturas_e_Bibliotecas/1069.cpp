#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, x, c1, c2, ac, c3, tam;
    string c;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        cin >> c;
        for(c2=0; c2<c.size(); c2++){
            if(c[c2]=='.'){
                c.erase(c.begin()+c2);
                c2=-1;
            }
        }
        c2=0;ac=0;
        while(c[c2]!='\0'){
            if(c[c2]=='<'&&c[c2+1]=='>'&&c2+1<c.size()){
                ac++;
                c.erase(c.begin()+c2);
                c.erase(c.begin()+c2);
                c2=-1;
            }
            c2++;
        }
        printf("%d\n", ac);
    }

    return 0;
}
