#include<stdio.h>

void troca(int *a, int *b){
	int tam = *a; 
	*a = *b; 
	*b = tam; 
}

void insertion(int *v, int n){
	if(n > 0 && v[n] < v[n-1]) {
		troca(&v[n], &v[n-1]);
		insertion(v, n-1);
	}
}

void ordena(int *v, int n){
	if(n<= 1) return; 
	ordena(v, n-1); 
	insertion(v, n-1); 
}

