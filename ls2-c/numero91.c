#include<stdio.h>


int f91(int n){
	if(n >= 101 && n!=0) return n - 10; 
	if(n<=100 && n!=0) return f91(f91(n+11)); 

	return 0;
}

int main(){

	int n; scanf("%d", &n);
	int var[1000001]; 
	int idx = 1; 
	var[0] = n; 
	
	while(n!=0){
	    scanf("%d", &n);
	    var[idx] = n; 
	    idx++;
	}

	for(int i = 0; i < idx-1; i++)
	   printf("f91(%d) = %d\n", var[i], f91(var[i]));

return 0;
}
