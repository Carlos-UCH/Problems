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


No *remover(No *Lista, int num){
		No *lixo = NULL; 
		
		
		if(Lista->prox->dado == num){
			lixo = Lista->prox; 
			Lista->prox = lixo->prox; 
		}else{
			No *aux = Lista;
			while(aux->prox != NULL && aux->prox->dado != num) aux = aux->prox; 
			
			lixo = aux->prox; 
			aux->prox = lixo->prox; 

		}

		free(lixo); 
		return lixo; 

}



int main(){



	return 0; 
}








