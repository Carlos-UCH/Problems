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


ll solve(ll k, ll s){
	ll idx = 0;
	vll val;
	for(ll i = 0; i <= k; ++i)
		for(ll j = 0; j <= k; ++j){
			ll z = s - (j + i);
			if(z >= 0 && z <= k) ++idx;
		}
	return idx;
		 

}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 

    ll k, s; cin >> k >> s; 

   cout << solve(k, s) << endl;
return 0;

}









