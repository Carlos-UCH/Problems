#include<stdio.h>
#include<stdlib.h>

typedef struct celula{
    int dado; 
    struct celula *esq, *dir; 
}celula; 

typedef struct no{
    celula *dado; 
    struct no *prox; 
}fila; 


fila *enfileira(fila *f, celula *elem){
    fila *novo = malloc(sizeof(fila)); 
    novo->dado = elem; 
    novo->prox = NULL;
    if(f==NULL) return novo; 

    fila *p = f; 
    while(p->prox != NULL)
        p = p->prox; 
    
    p->prox = novo; 
    return f; 
}


int desenfileira(fila **f, celula **elem){
    if(*f == NULL) return 1; 
    fila *temp = *f; 
    *elem = temp->dado; 
    *f = temp->prox; 
    free(temp); 
    return 0;
}


void largura(celula *raiz){
    fila *f = NULL; 
    f = enfileira(f, raiz);
    celula *atual; 

    while(!desenfileira(&f, &atual)){
        if(atual != NULL){
            printf("%d ", atual->dado); 
            f = enfileira(f, atual->esq);
            f = enfileira(f, atual->dir); 
        }
    }
    
}

