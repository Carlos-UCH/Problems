#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pair<ll, ll>>
#define endl '\n'

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
	
    ll k, count = 0, num=19; cin >> k;
	
    bool flag = true; 

    while(flag){
	ll valor = 0; 
	ll aux = num; 

	while(aux > 0){
		valor+=aux%10;
		aux/=10; 
	}	
	
	if(valor == 10) {
	++count; 
		if(count == k){
			cout << num << endl;
			flag = false;  
		}
	}
	++num; 

    }

    return 0;
}





