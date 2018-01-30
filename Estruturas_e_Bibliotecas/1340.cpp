#include<bits/stdc++.h>
#define debug printf("entrou\n")
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;
typedef vector<int> vi;
typedef stack<int> si;
typedef queue<int> qi;
typedef priority_queue<int> pqi;
bool f(int x, int y){return x>y;}
using namespace std;
int main(){
    int c, n, c1, c2, x, j, h, g;
    si p;
    qi f;
    pqi pq;
    while(scanf("%d", &n)>0){c2=h=g=j=0;
        while(n--){
            scanf("%d %d", &c, &x);
            if(c==1){
                f.push(x);
                p.push(x);
                pq.push(x);
            }else{c2++;
                if(f.front()==x)
                    j++;
                if(p.top()==x)
                    h++;
                if(pq.top()==x)
                    g++;
                f.pop();
                p.pop();
                pq.pop();
            }
        }if(c2==j && c2!=h && c2!=g)
            printf("queue\n");
        else if(c2==h && c2!=j && c2!=g)
            printf("stack\n");
        else if(c2==g && c2!=j && c2!=h)
            printf("priority queue\n");
        else if(c2!=g && c2!=h && c2!=j)
            printf("impossible\n");
        else if((c2==h && c2==j) || (c2==g && c2==j) || (c2==h&&c2==g))
            printf("not sure\n");
        else
            printf("not sure\n");
        qi f2;
        swap(f, f2);
        si p2;
        swap(p, p2);
        pqi pq2;
        swap(pq, pq2);
    }
    return 0;
}

