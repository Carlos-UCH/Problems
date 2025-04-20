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


void varetas(ll n, ll k, vll var){
	ll tam = 0; 

	for(ll i = 0; i < k; ++i) tam += var[i];

	cout << tam << endl;

}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
	
	
	
    ll n, k; cin >> n >> k; 	
    vll var(n);

    for(auto&x: var) cin >> x; 

    sort(all(var));
    reverse(all(var));
	
    varetas(n, k, var); 

    return 0;

}
