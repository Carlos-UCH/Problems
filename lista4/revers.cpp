#include<bits/stdc++.h>

using namespace std; 

#define ll long long
#define ld long double
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define f first
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
ll meuJeitoNinja = 0; 

template<typename Container, typename T>
bool fd(const T& value, const Container& container) {
    return find(container.begin(), container.end(), value) != container.end();
} 


void solve(string s, ll tam){

	for(ll i = 1; i < tam; ++i)
		if(s[i] != s[i-1])
			meuJeitoNinja++;

	cout << meuJeitoNinja << endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
	
	
    string s; cin >> s;
    ll tam = s.size();

    solve(s, tam);  

    return 0;

}








