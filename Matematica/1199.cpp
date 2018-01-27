#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d", &n)&&n!=-1)
        if(!n){
            scanf("%*c%x", &n);
            printf("%d\n", n);
        }else
            cout << "0x" << hex << uppercase << n << endl;
    return 0;
}
