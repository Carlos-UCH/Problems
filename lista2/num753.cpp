#include<bits/stdc++.h>

using namespace std; 

#define ll long long
#define ld long double
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pair<ll, ll>>
#define endl '\n'
#define found(x, y) (x.find(y) != x.end()) //set - map - unordered_set - unordered_map
#define debug(x) cout << #x << " = " << x << endl

const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3fll;


template<typename Container, typename T>
bool fd(const T& value, const Container& container) {
    return find(container.begin(), container.end(), value) != container.end();
} 



int solve(ll n, string s, vector<char>seven){

    ll meuJeitoNinja = 0; 
    ll val = stoll(s);

    if(val > n) return 0; 
    if((count(all(s), '5') > 0 and count(all(s), '3') > 0 and count(all(s), '7') > 0)) meuJeitoNinja = 1;
    
    for(char k: seven)
        meuJeitoNinja += solve(n, s+k, seven); 
    
    return meuJeitoNinja;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 

    ll n; cin >> n; 
    
    vector<char> seven = {'3', '5', '7'};
    cout << solve(n, "0", seven) << endl; 
    

    return 0;
}