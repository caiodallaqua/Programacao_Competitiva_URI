#include<stdio.h>
#include<math.h>
int main(){
    int vf, vg, df;
    float tf, tg, dg;
    while(scanf("%d %d %d", &df, &vf, &vg)!=EOF){
     //scanf("%d %d %d", &df, &vf, &vg);
        tf = (float)12/vf;
        dg = sqrt(df*df+12*12);
        tg = (float)dg/vg;
        if(tg<=tf)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}
