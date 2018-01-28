#include<stdio.h>
int algEuclides(int x, int y){
    if(y==0)
        return x;
    return algEuclides(y, x%y);
}

int main(){
    int x, y, z;
    while(scanf("%d %d %d", &x, &y, &z)!=EOF){
        if(x*x==y*y+z*z||y*y==z*z+x*x||z*z==x*x+y*y){
                if(algEuclides(algEuclides(x,y), z)==1)
                    printf("tripla pitagorica primitiva\n");
                else
                    printf("tripla pitagorica\n");
        }else
            printf("tripla\n");
    }
    return 0;
}
