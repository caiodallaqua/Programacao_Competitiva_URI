#include<stdio.h>
int main(){
    int n, c1, ac;
    while(scanf("%d", &n) && n!=0){
        ac=0;
        for(c1=1; c1<=n; c1++)
            ac += c1*c1;
        printf("%d\n", ac);
    }
    return 0;
}
