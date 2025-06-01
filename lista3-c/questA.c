#include<stdio.h>

void troca(int *a, int *b){
	int temp = *a; 
	*a = *b; 
	*b = temp; 
}


void insercao(int *v, int tam){
	for(int i = 1; i < tam; i++)
		for(int j = i - 1; j>=0 && v[j] > v[j+1]; j--)
			troca(&v[j], &v[j+1]); 	
}

int main(){
	
	int v[1010]; 
	
	int i = 0, tam = 0; 
	while(scanf("%d", &v[i])!= EOF) i++, tam++; 	
	

	insercao(v, tam);
	for(int i = 0; i < tam; i++) printf("%d ", v[i]);
	printf("\n"); 
	

return 0;

}

