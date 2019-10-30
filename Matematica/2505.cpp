#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);
#define FAST() ios_base::sync_with_stdio(false)
#define MOD 1000000;

long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power & 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2;
    }
    return result;
}

string conv(long long n, int com){
	if(com){
		long long number = fast_power(n, n);
		char buffer [128];
		int ret = snprintf(buffer, sizeof(buffer), "%ld", number);
		char * num_string = buffer;
		return num_string;

	} else {
		long long number = n;
		char buffer [128];
		int ret = snprintf(buffer, sizeof(buffer), "%ld", number);
		char * num_string = buffer;
		return num_string;

	}
}

int main(){
	int n;

	while(cin >> n){
		string ans, entrada;

		ans = conv(n, 1);
		entrada = conv(n, 0);

		int ans_tam = ans.length();
		int entrada_tam = entrada.length();

		bool flag = true;
		for(int i = ans_tam-1; entrada_tam > 0; i--){
			if(ans[i] == entrada[entrada_tam-1]){
				entrada_tam--;
			} else {
				flag = false;
				break;
			}
		}

		if(flag)
			cout << "SIM" << endl;
		else
			cout << "NAO" << endl;
	}

	return 0;
}