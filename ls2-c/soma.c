#include<stdio.h>


long long soma(long long n, long long aux){
	if(n == 0) return aux; 
	aux+=n%10;
	soma(n/10, aux);

}



int main(){

 	long long n; scanf("%lld", &n); 

	printf("%lld\n", soma(n, 0));

return 0; 
}
