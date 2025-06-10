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

No *inserir_no_fim(No *Lista, int num){
		No *novo_no = criar_no(); 
		
		novo_no->dado = num;  
		novo_no->prox = NULL; 
		
		No *aux = Lista; 

		while(aux->prox != NULL) aux = aux->prox; 
		aux->prox = novo_no;

		return Lista; 
}

void imprimir(No *Lista){
	 	No *aux = Lista->prox; 

		while(aux!= NULL){
			printf("%d ", aux->dado); 
			aux = aux->prox; 
		}

		printf("\n");

}

int main(){

	No *Lista = criar_no(); 
	

return 0; 
}




