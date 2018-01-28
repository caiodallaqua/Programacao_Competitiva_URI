#include<stdio.h>
int main(){
    int x, y, r, b, c, n, c1;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        scanf("%d %d", &x, &y);
        r = ((3*x)*(3*x))+(y*y);
        b = 2*(x*x) + (5*y)*(5*y);
        c = -100*x + (y*y*y);
        if(r>b && r>c)
            printf("Rafael ganhou\n");
        else if(b>r && b>c)
            printf("Beto ganhou\n");
        else if(c>b && c>r)
            printf("Carlos ganhou\n");
    }
    return 0;
}
