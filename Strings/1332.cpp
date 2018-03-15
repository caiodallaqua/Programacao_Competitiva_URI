#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, c1, c2, i, j;
    i=0;j=0;
    char one[4]="one";
    char two[4]="two";
    string p;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        cin >> p;
        if(p.size()==5)
            printf("3\n");
        else{
            for(c2=0; c2<p.size(); c2++){
                if(p[c2]==one[c2])i++;
                if(p[c2]==two[c2])j++;
            }
            if(i>j)printf("1\n");
            else if(j>i)printf("2\n");
        }
        i=0; j=0;
    }
    return 0;
}
