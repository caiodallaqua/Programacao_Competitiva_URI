#include<bits/stdc++.h>
int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    c=b-a;
    if(c%2)c++;
    if(a==b)
        printf("%d\n", a);
    else
        printf("%llu\n", (unsigned long long int)b*(1+b)/2-(a-1)*a/2);
    return 0;
}
