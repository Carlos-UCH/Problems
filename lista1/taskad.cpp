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
	
    //Raccon = soma-y
    ll n, ans = LINF, soma, y; cin >> n;
    vll cards(n); 

    for(int i = 0; i < n; ++i) {
	cin >> cards[i]; 
	soma+=cards[i];
    }

    for(int i = 0; i < n; ++i){
	y+=cards[i];
	if(i + 1 < n) ans = min(ans, abs(soma - 2*y));
	
    }

    cout << ans << endl;


	

return 0;
}
