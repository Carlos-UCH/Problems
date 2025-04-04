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
#define found(x, xs) (xs.find(x) != xs.end())
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solve (string n){

ll qnt_comb = 1 << (n.size()-1);
ll total = 0; 

for(ll i = 0; i < qnt_comb; ++i){
	ll num_atual = 0; 

	for(ll j = 0; j < n.size(); ++j){
		num_atual = num_atual * 10 + (n[j] - '0');

		if(i&(1<<j) || j == n.size()-1){
			total+=num_atual; 
			num_atual = 0; 
		}
	
	}

}



cout << total << endl;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
	
    string n; cin >> n;

    solve(n); 


return 0;
}
