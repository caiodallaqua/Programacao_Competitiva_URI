#include<bits/stdc++.h>
int main(){
    char s[55];
    int c1;
    while(scanf("%[^\n]s", s)!=EOF){
        getchar();
        for(c1=0; c1<strlen(s); c1++)
            if((s[c1]>90&&s[c1]<97)||(s[c1]<65||s[c1]>122||s[c1]==' '))
                printf("%c", s[c1]);
            else
                if(isupper(s[c1]))
                    if(s[c1]+13>90)
                        printf("%c", s[c1]-13);
                    else
                        printf("%c", s[c1]+13);
                else
                    if(s[c1]+13>122)
                        printf("%c", s[c1]-13);
                    else
                        printf("%c", s[c1]+13);
        printf("\n");
    }
    return 0;
}
