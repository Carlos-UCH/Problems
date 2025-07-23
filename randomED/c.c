#include<stdio.h>
#include<stdlib.h>

typedef struct celula{
    int dado; 
    struct celula *prox; 
}celula; 


void insere_antes(celula *le, int x, int y){
    celula *novo = malloc(sizeof(celula)); 
    
    novo->dado = x; 
    celula *aux = le; 

    while(aux->prox->dado != y) {
        aux = aux->prox;
        if(aux->prox == NULL){
            break; 
        }
    } 

    novo->prox = aux->prox; 
    aux->prox = novo; 

}

void insere_inicio(celula *le, int x){
    celula *novo = malloc(sizeof(celula)); 
    novo->dado = x; 
    novo->prox = le->prox; 
    le->prox = novo;  
}

