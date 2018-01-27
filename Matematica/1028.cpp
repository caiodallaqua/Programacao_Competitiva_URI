#include<stdio.h>
int algEuclides(int x, int y){
    if(y==0)
        return x;
    return algEuclides(y, x%y);
}
int main(){
    int n, c1, x, y;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        scanf("%d %d", &x, &y);
        printf("%d\n", algEuclides(x, y));
    }
    return 0;
}
