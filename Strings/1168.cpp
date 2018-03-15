#include<stdio.h>
#include<string.h>
int main(){
    int n, c1, c2, ac, t;
    char c[1000];
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        scanf("%s", c);
        t = strlen(c);
        ac=0;
        for(c2=0; c2<t; c2++)
            if(c[c2]=='1')ac+=2;
            else if(c[c2]=='2'||c[c2]=='3'||c[c2]=='5')ac+=5;
            else if(c[c2]=='4')ac+=4;
            else if(c[c2]=='6'||c[c2]=='9'||c[c2]=='0')ac+=6;
            else if(c[c2]=='7')ac+=3;
            else if(c[c2]=='8')ac+=7;
        printf("%d leds\n", ac);
    }
    return 0;
}
