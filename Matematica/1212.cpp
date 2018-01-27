#include<bits/stdc++.h>
using namespace std;
int main(){
    int ac, tam, c1, c;
    char a[12], b[12];
    bool flag;
    while(scanf(" %s %[^\n]s ", a, b)){ac=0;flag=0;
        if(strlen(a)==1&&strlen(b)==1&&a[0]==b[0]&&a[0]=='0')
            break;
        if(strlen(a)>strlen(b))
            c=strlen(b);
        else
            c=strlen(a);
        reverse(a, a+strlen(a));
        reverse(b, b+strlen(b));
        for(c1=0; c1<c; c1++){
            if(flag){
                if(a[c1]-'0'+b[c1]-'0'+1>9){
                    flag=1;
                    ac++;
                }else{
                    flag=0;
                }
            }else if((a[c1]-'0')+(b[c1]-'0')>9){
                //printf("%d\n", c1);
                ac++;
                flag=1;
                if(c1==c-1){
                    if(strlen(a)>c){
                        if(a[c]-'0'+1>9)
                            ac++;
                        flag=0;
                    }else if(strlen(b)>c){
                        if(b[c]-'0'+1>9)
                            ac++;
                        flag=0;
                    }
                }
            }else
                flag=0;
        }if(flag){
            if(strlen(a)>c){
                if(a[c]-'0'+1>9)
                    ac++;
            }else if(strlen(b)>c){
                if(b[c]-'0'+1>9)
                    ac++;
            }
        }
        if(!ac)
            printf("No carry operation.\n");
        else
            if(ac==1)
                printf("1 carry operation.\n");
            else
                printf("%d carry operations.\n", ac);
        fill(a, a+12, '\0');
        fill(b, b+12, '\0');
        }
    return 0;
}
