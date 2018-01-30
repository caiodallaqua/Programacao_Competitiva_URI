#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<string.h>
using namespace std;
int main(){
    int n, c1, c2, tam;
    char p[10];
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        cin >> p;
        tam=strlen(p);
        std::sort(p, p+tam);
        do{
            cout << p << endl;
        }while(std::next_permutation(p, p+tam));
        puts("");
    }
    return 0;
}
