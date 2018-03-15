#include<bits/stdc++.h>
int main(){
    double d, c;
    while(scanf("%lf %lf", &d, &c)!=EOF)
        if(d-((int)d)>c)printf("%d\n", (int)(d+1));
        else printf("%d\n", (int)(d));
    return 0;
}
