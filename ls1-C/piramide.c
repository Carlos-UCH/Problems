#include<stdio.h>

int main(){
   int n; scanf("%d", &n); 

   int grid[101][101]; 

   for(int i = 0; i <  n; ++i){
	for(int j = i; j< n-i; ++j){
		grid[i][j] = i+1;
		grid[n-i-1][j] = i+1;
		grid[j][i] = i+1;
		grid[j][n-i-1] = i+1; 
	
	}
	
   }
	

   	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
		printf("%d", grid[i][j]);
		}
		printf("\n");
	}




return 0; 
}
