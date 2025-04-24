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

const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
	
    ll a = 1, b = 1; 
    ll n; cin >> n; 

    for(ll i = 0; i < n; ++i){
	ll w,j; cin >> w >> j; 
	ll k = max((a + w - 1)/ w, (b+j-1)/j); 
	a = k * w; 
	b = k * j; 
    }

    cout << a+b << endl; 	

    return 0;

}
