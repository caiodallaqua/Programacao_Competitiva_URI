#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
vector<int> id;
int main(){
    int n, c,c1, t, ac, i;
    float m;
    scanf("%d", &t);
        for(c=0; c<t; c++){
            scanf("%d", &n);
            ac=0;
            for(c1=0; c1<n; c1++){
                cin >> i;
                id.push_back(i);
                ac+=i;
            }m=ac/n;
            ac = 0;
            for(c1=0; c1<n; c1++)
                if(id[c1]>m)
                   ac++;
            m = (float)ac/n;
            printf("%.3f%%\n", m*100);
            id.clear();
    }
    return 0;
}
