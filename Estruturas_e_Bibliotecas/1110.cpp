#include<stdio.h>
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    queue<int>q;
    vector<int>v;
    int n, i, c1;
    do{
        scanf("%d", &n);
        for(c1=0; c1<n; c1++)
            q.push(c1);
        while(q.size()>=2){
        	v.push_back(q.front());
        	q.pop();
        	q.push(q.front());
        	q.pop();
    	}
    	i=0;
    	if(n!=0){
     		printf("Discarded cards: ");
     		while(i<n-1){
        		printf("%d", v[i]+1);if(i!=n-2)printf(", ");
        		i++;
    		}puts("");
    		cout << "Remaining card: " << q.front()+1 << endl;
    	}
    	v.clear();
    	while(!q.empty())
        	q.pop();
    }while(n!=0);
    return 0;
}
