#include<stdio.h>
#include<stdlib.h>

typedef struct celula{
  int dado; 
  struct celula *prox;

}celula; 

void divide_lista(celula *l, celula *l1, celula *l2){
  celula *aux3 = l->prox;
  celula *aux2 = l2; 
  celula *aux1 = l1; 

  while(aux3 != NULL){ 
    if(aux3->dado%2 == 0){
      aux2->prox = aux3;
      aux2 = aux3; 
    }else{
      aux1->prox = aux3; 
      aux1 = aux3; 
    }
    
    aux3 = aux3->prox; 
     
  }
  aux2->prox = NULL;
  aux1->prox = NULL; 

}
