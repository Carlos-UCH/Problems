#include<stdio.h>
#include<stdlib.h>

typedef struct celula{
	int dado; 
	struct celula *prox; 
}celula; 


void insere_inicio(celula *le, int x){
		celula *novo_no = malloc(sizeof(celula));
		novo_no->prox = NULL;
		
		novo_no->dado = x; 
		
		if(le->prox == NULL){
			novo_no->prox = NULL; 
			le->prox = novo_no; 
		}else{
			novo_no->prox = le->prox; 
			le->prox = novo_no; 
		}
}


void imprimir(celula *lista){
		celula *aux = lista->prox;
		
		while(aux!= NULL){
			printf("%d ", aux->dado);
			aux = aux->prox;
		}

		printf("\n");

}


void insere_antes(celula *le, int x, int y){
	celula *novo_no = malloc(sizeof(celula)); 
	
	novo_no->dado = x; 
	celula *aux = le; 

	if(le->prox == NULL){
		novo_no->prox = NULL; 
		le->prox = novo_no; 
	}else{
		while(aux->prox!=NULL && aux->prox->dado != y) aux = aux->prox; 	
			novo_no->prox = aux->prox; 
			aux->prox = novo_no;	
	
	}


}


