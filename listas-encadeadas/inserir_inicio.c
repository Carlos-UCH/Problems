#include<stdio.h>
#include<stdlib.h>


typedef struct No{
	int dado; 
	struct No *prox; 

}No; 

No *criar_lista(){
	No *novo = malloc(sizeof(No)); 
	novo->prox = NULL; 
	return novo; 

}

No *inserir_no_inicio(No *Lista, int num){
	No *novo_no = criar_lista(); 

	novo_no->dado = num;

	novo_no->prox = Lista->prox;
	Lista->prox = novo_no;

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

	No *Lista = criar_lista();	
	inserir_no_inicio(Lista, 10);
	inserir_no_inicio(Lista, 20);
	imprimir(Lista); 


return 0; 
}








