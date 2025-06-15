#include<stdio.h>
#include<stdlib.h>


typedef struct{
	int *vetor; 
	int n; 
	int topo; 

}pilha; 


pilha *criar_pilha(int n){
	pilha *p = malloc(sizeof(pilha));
	p->vetor = malloc(n*sizeof(int)); 
	p->n = n; 
	p->topo =  0;
	return p; 
}


void empilhar(pilha *p, int x){
	
	if(p->topo == p->n){
		p->vetor = realloc(p->vetor, 2*p->n*sizeof(int));
		p->n*=2;  
	}

	p->vetor[p->topo] = x; 
	p->topo++; 
}

int desempilhar(pilha *p){
	p->topo--;
	return p->vetor[p->topo];  

}

void imprimir(pilha *p){
	while(p->topo != 0){
		printf("%d ", p->vetor[p->topo-1]);
		p->topo--; 
	}

	printf("\n"); 

}



int main(){
	


return 0;

}
