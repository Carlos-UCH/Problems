#include<stdio.h>
#include<stdlib.h>

typedef struct celula{
  int dado; 
  struct celula *prox; 
}celula; 


celula *busca(celula  *le, int x){
  celula *aux = le;
  while(aux != NULL){
     if(aux->dado == x) return aux; 
     else aux = aux->prox; 
  }
  return NULL;

}

celula *busca_rec(celula *le, int x){
  celula *aux = le; 
  if(aux == NULL) return NULL;
  if(aux->dado == x) return aux; 
  busca_rec(aux->prox, x); 

}

