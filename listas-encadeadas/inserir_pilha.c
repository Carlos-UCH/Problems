#include<stdio.h>
#include<stdlib.h>


typedef struct celula{
  int dado; 
  struct celula *prox; 

}celula; 


int empilha(celula *p, int x){
  if(p == NULL) return 0; 
  celula *novo = malloc(sizeof(celula)); 
  
  novo->dado = x; 
  novo->prox = p->prox; 
  p->prox = novo; 
  return 1; 
}



