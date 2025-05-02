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

    ll n, x; cin >> n >> x; 
    vll a(n); 

    for(int i = 0; i < n; ++i) cin >> a[i]; 
    ll aux = 0; 
    for(ll i = 0; i < n-1; ++i){
	if((a[i] + a[i+1]) > x){ // 4 > 1 
	   ll sub = (a[i] + a[i+1]) - x; // 4 - 1 = 3 
	   a[i+1]-=sub; // 4 -  3 =  1
	   aux+=sub; // 6 2 3
	}
	
    }

    if(a[n] > x) aux+=a[n]-x; 

    cout << aux << endl; 

    return 0;

}
