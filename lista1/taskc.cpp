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

void solve(string s){
ll tam = s.size(); 
ll combinacoes = 1<<tam-1; 
ll total = 0;

for(int bitmask = 0; bitmask < combinacoes; ++bitmask){
	ll num_atual = 0;
	for(int i = 0; i < tam; ++i){
	   num_atual = num_atual * 10 + (s[i]-'0'); 
	   
          if(bitmask&(1 << i) || i == tam-1){
		total+=num_atual; 
		num_atual = 0;
	  }
	   
	}


	}

cout << total << endl;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 

	
    string s; cin >> s; 

    solve(s); 


return 0;
}
