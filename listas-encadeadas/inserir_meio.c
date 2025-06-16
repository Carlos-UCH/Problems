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

void inserir_no_meio(No *Lista, int num, int anterior){
	No *novo_no = criar_no(); 

	novo_no->dado = num;
	No *aux = Lista; 

	while(aux->dado != anterior && aux->prox) aux = aux->prox;
	novo_no->prox = aux->prox; 
	aux->prox = novo_no; 


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


return 0; 

}








