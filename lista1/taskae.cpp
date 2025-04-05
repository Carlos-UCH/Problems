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
	

    ll n, h, attack = 0; cin >> n >> h;
	
    vpll katanas(n); 
    ll empu = 0; 

    for(ll i = 0; i < n; ++i){
	ll a, b; cin >> a >> b; 
 	katanas.emplace_back(a,b);
	empu = max(empu, a); 
    }

    vll arr; 
    for(auto p: katanas) if(p.s > empu) arr.push_back(p.s); 
	
    sort(arr.rbegin(), arr.rend());

    for(ll x: arr){
    	h-=x;
	++attack; 
	if(h <= 0){
		cout << attack <<endl; 
		return 0;
	}
    }


    while(h > 0){
	h-=empu;
	++attack; 

    }

    cout << attack << endl;
return 0;
}
