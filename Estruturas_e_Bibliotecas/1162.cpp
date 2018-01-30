#include <stdio.h>
#include <stdlib.h>
int main (){
    int n, l, c1, c2, c3, c4, v[60], ac=0;
    scanf("%d", &n);
    for(c1=0; c1<n; c1++){
        scanf("%d", &l);
        for(c2=0; c2<l; c2++)
            scanf("%d", &v[c2]);
        ac=0;
        for(c2=0; c2<l-1; c2++){
        	c3=c2+1;
        	while(c3<l){
        	    	if(v[c2]>v[c3])
        	        	ac++;
        	    	c3++;
        	}
        }
        printf("Optimal train swapping takes %d swaps.\n", ac);
    }
    return 0;
}
