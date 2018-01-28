#include<bits/stdc++.h>
int main(){
    int n, x, c1, r;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        if(x%2==0)
            printf("%s\n", x==2?"Prime":"Not Prime");
        else{
            r=sqrt(x)+1;
            for(c1=3; c1<=r; c1+=2)
                if(x%c1==0){
                    c1=r+10;
                    x=0;
                }
            printf("%s\n", x?"Prime":"Not Prime");
        }
    }return 0;
}
