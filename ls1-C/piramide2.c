#include<stdio.h>


int main(){
	int n; scanf("%d", &n);
	int ast = 1, esp= n-1; 
	for(int i = 1; i <=n; ++i){
		for(int j = 1; j<=esp; j++) printf(" ");
		for(int j = 1; j <= ast; j++)
			printf("*");
			printf("\n");
			ast = ast + 2;
			esp = esp -1;	
	}

return 0; 
}
