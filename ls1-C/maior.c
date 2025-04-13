#include<stdio.h>
#include<math.h>


int main(){

	int a, b; scanf("%d %d", &a,&b);
	int n; scanf("%d", &n);
	int fat = 1; 
	int exp = pow(a, b);
	for(int i = 1; i <= n; i++){
		fat *=i; 
	}

	if(fat > exp) printf("%s\n", "Pedro"); 
	else printf("%s\n", "Lucas");


return 0;
}
