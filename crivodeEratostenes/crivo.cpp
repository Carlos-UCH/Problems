#include<bits/stdc++.h>

using namespace std;

const int MAX = 100000; 

//-1 = indefinido 
//0 = composto 
//1 = primo 
vector<int>eh_primo(MAX, -1); 


void crivo(int n){
	for(int i = 2; i <=n; ++i){
		if(eh_primo[i] == -1){
			eh_primo[i] = 1;
			for(int j = i+i; j<=n; j+=i){
				eh_primo[j] = 0;
			}
		}
	
	}

}

int main(){


return 0; 
}
