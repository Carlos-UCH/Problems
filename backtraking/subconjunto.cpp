#include<bits/stdc++.h>

using namespace std;

bool is_soluction(int i, int N) {return i == N;}

void process_soluction(const vector<int>&xs){

cout << "{";

for(auto x: xs) cout << x << ' '; 

cout << "}" << endl; 

}

vector<int> candidates(int i, const vector<int>&as){
	return {as[i]};
}

void backtraking(vector<int>& xs, int i, int N, const vector<int>&as){
	if(is_soluction(i, N))
		process_soluction(xs); 
	else{
		auto cs = candidates(i, as); 

		for(auto c: cs){
		  xs.push_back(c); 
		  backtraking(xs, i + 1, N, as);
		  xs.pop_back(); 
		}
	}
	

}

int main(){
	vector<int> as {2,3,5,7,11}, xs; 
	backtraking(xs, 0, (int)as.size(), as); 
	return 0; 

}
