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
	
    ll n, walk, teleport; cin >> n >> walk >> teleport; 
    ll menor = 0, maior = 0; 
    vll dist(n); 

    for(ll i = 0; i < n; ++i) cin >> dist[i];

    for(ll i = 1; i <= n-1; ++i) {
	menor = abs((dist[i] - dist[i-1]))*walk;
	if(menor > teleport) maior+= teleport;
	else maior+=menor; 
    }

    cout << maior << endl; 


    return 0;

}
