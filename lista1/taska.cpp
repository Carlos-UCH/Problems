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

	
    ll n, m; cin >> n >> m; 
    ll k; 
    ll qnt = 0, p = 0, aux;
    vpll AB;
    vpll CD; 
	
    for(ll i = 0; i < n; ++i){
	ll a, b; cin >> a >> b;
	AB.emplace_back(a, b);
    }

    for(ll i = 0; i < m; ++i){
	ll c, d; cin >> c >> d;
	CD.emplace_back(c, d);
    }
	
    for(auto& x: AB){
	    ll dist_min = LINF; 
	    ll idx; 
	for(int i = 0; i < m; ++i){
		ll dist = abs(x.f - CD[i].f) + abs(x.s - CD[i].s); 
		if(dist < dist_min){
			dist_min = dist;
			idx = i+1; 	
		}
	}
	cout << idx << endl;

    }
	

return 0;
}
