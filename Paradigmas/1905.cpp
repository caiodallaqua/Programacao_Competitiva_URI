#include<iostream>
#include<stdio.h>
using namespace std;

int m[5][5];
bool dfsMenti(int i, int j){
    if(i==4&&j==4)return true;
    if(i<0||j<0||i==5||j==5)return false;
    if(m[i][j]==1)return false;
    m[i][j]=1;
    return (dfsMenti(i+1,j)||dfsMenti(i,j+1)||dfsMenti(i-1,j)||dfsMenti(i,j-1));
}

int main(){
    int k, c1, c2, c3, n;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        for(c2=0; c2<5; c2++)
            for(c3=0; c3<5; c3++)
		scanf("%d", &m[c2][c3]);
        k = dfsMenti(0, 0);
        if(k)printf("COPS\n");
        else printf("ROBBERS\n");
    }

    return 0;
}
