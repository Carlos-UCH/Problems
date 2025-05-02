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


void backtracking(vector<string>&words, string &regra, vector<string>&combinacoes, ll i, string nome){
 
	if(regra[i] == '#'){ 
	   for(auto k: words){
	   backtracking(words, regra, combinacoes, i+1, nome + k);
	   }
	}else if(regra[i] == '0'){
	   for(ll w = 0; w <= 9; w++){
	   backtracking(words, regra, combinacoes, i+1, nome + char(w + '0'));
	   }
      }
	if(i == regra.size()){
	    combinacoes.emplace_back(nome);
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
	
    ll n;
    while(cin >> n){
	vector<string> words(n); 
	for(auto &x: words) cin >> x; 
	ll m; cin >> m; 
	vector<string> regras(m); 
	for(auto &y: regras) cin >> y;
	for(auto &regra: regras){
	cout << "--" << endl;
	vector<string>combinacoes; 
	backtracking(words, regra, combinacoes, 0, ""); 
	
	for(auto &item: combinacoes) cout << item << endl;
	}
}
	

    return 0;

}
