#include<bits/stdc++.h>
int mdc(int a, int b){
    while(b > 0){
        a = a % b;
        a^=b;
        b^=a;
        a^=b;
    }
    return a;
}
int main(){
    int n, a, b, c1, ac, c2;
    while(1){
    scanf("%d %d %d", &n, &a, &b);
    if(n==0&&a==0&&b==0)return 0;
    ac=0;
    ac+=n/a;
    ac+=n/b;

    ac-=n/((a*b)/mdc(a, b));
    printf("%d\n", ac);
    }
    return 0;
}
