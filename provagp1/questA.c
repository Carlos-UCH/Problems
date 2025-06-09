#include<stdio.h>
#include<stdlib.h>


typedef struct celula{
	int num; 
	char palavra[20]; 
}celula; 


void troca(celula *a, celula *b){
		celula temp = *a; 
		*a = *b; 
		*b = temp; 
}

void insertion(celula *v, int n){
		for(int i = 0; i < n; i++){
			for(int j = i-1; j>=0; j--){
				if(v[j].num > v[j+1].num){
					troca(&v[j], &v[j+1]);
				}
			}
		}

}

int buscabinaria(celula *vetor, int n, int x){
		int e = 0, d = n-1; 
		
		while(e <=d){
			int mid = (e+d)/2;
			if(vetor[mid].num == x) return mid; 
			else if(vetor[mid].num < x) e = mid + 1; 
			else d = mid - 1;
		}

		return -1;

}

int main(){

	int n; scanf("%d", &n);	
	
	celula *vetor = malloc(n*sizeof(celula)); 

	for(int i = 0; i < n; i++) scanf("%d %s", &vetor[i].num, vetor[i].palavra);

	insertion(vetor, n); 	
	
	int x=0; 	
	while(scanf("%d", &x) != EOF){
		int valor = buscabinaria(vetor, n, x);
		if(valor!= -1) printf("%s\n", vetor[valor].palavra); 
		else printf("undefined\n"); 
	}

return 0; 
}
