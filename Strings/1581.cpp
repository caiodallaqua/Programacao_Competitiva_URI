#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n, c1, c2, k, ac=0;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        string s[101];
        ac=0;
        scanf("%d", &k);
        for(c2=0; c2<k; c2++)
            cin >> s[c2];
        for(c2=0; c2<k; c2++)
            if(s[c2]==s[c2+1]&&c2+1<k)
                ac++;
        if(ac+1==k)
            cout << s[0] << endl;
        else
            printf("ingles\n");
        for(c2=0; c2<k; c2++)
            s[c2].clear();
    }
    return 0;
}
