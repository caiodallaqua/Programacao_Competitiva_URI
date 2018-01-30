#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<string>
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<math.h>
#define pb push_back
#define debug printf("entrou\n")
#define mkp make_pair
#define all(c) (c).begin(), (c).end()
typedef unsigned long long ull;
using namespace std;
int main(){
    map<string, string> m;
    string s;
    char s2[1001];
    m.insert(pair<string, string>("brasil","Feliz Natal!"));
    m.insert(pair<string, string>("alemanha","Frohliche Weihnachten!"));
    m.insert(pair<string, string>("austria","Frohe Weihnacht!"));
    m.insert(pair<string, string>("coreia","Chuk Sung Tan!"));
    m.insert(pair<string, string>("espanha","Feliz Navidad!"));
    m.insert(pair<string, string>("grecia","Kala Christougena!"));
    m.insert(pair<string, string>("estados-unidos","Merry Christmas!"));
    m.insert(pair<string, string>("inglaterra","Merry Christmas!"));
    m.insert(pair<string, string>("australia","Merry Christmas!"));
    m.insert(pair<string, string>("portugal","Feliz Natal!"));
    m.insert(pair<string, string>("suecia","God Jul!"));
    m.insert(pair<string, string>("turquia","Mutlu Noeller"));
    m.insert(pair<string, string>("argentina","Feliz Navidad!"));
    m.insert(pair<string, string>("chile","Feliz Navidad!"));
    m.insert(pair<string, string>("mexico","Feliz Navidad!"));
    m.insert(pair<string, string>("antardida","Merry Christmas!"));
    m.insert(pair<string, string>("canada","Merry Christmas!"));
    m.insert(pair<string, string>("irlanda","Nollaig Shona Dhuit!"));
    m.insert(pair<string, string>("belgica","Zalig Kerstfeest!"));
    m.insert(pair<string, string>("italia","Buon Natale!"));
    m.insert(pair<string, string>("libia","Buon Natale!"));
    m.insert(pair<string, string>("siria","Milad Mubarak!"));
    m.insert(pair<string, string>("marrocos","Milad Mubarak!"));
    m.insert(pair<string, string>("japao","Merii Kurisumasu!"));
    while(scanf(" %[^\n]s", s2)>0){
        s=s2;
        if(m.find(s)!=m.end())
            cout << m.find(s)->second << endl;
        else
            printf("--- NOT FOUND ---\n");
    }return 0;
}
