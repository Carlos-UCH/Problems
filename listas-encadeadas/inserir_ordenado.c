#include<stdio.h>
#include<stdlib.h>

typedef struct No{
	int dado; 
	struct No *prox; 
}No; 


No *criar_no(){
	No *novo = malloc(sizeof(No)); 
	novo->prox = NULL; 
	return novo; 
}

void inserir_ordenado(No *Lista, int num){
	No *novo_no = criar_no(); 
	
		novo_no->dado = num; 
	if(Lista->prox == NULL || novo_no->dado < Lista->prox->dado){
		novo_no->prox = Lista->prox; 
		Lista->prox = novo_no; 
	}else{
		No *aux = Lista; 

		while(aux->prox != NULL && aux->prox->dado < novo_no->dado) aux = aux->prox; 
		novo_no->prox = aux->prox; 
		aux->prox = novo_no; 
	}

}


void imprimir(No *Lista){
	No *aux = Lista->prox; 

	while(aux!=NULL){
		printf("%d ", aux->dado); 
		aux = aux->prox; 
	}

	printf("\n");

}


int main(){
	

return 0; 
}
