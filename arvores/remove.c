#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int chave; 
    struct no *esq, *dir; 
}no; 

no *maximo(no *r){
    if(r->dir == NULL) return r; 
    return maximo(r->dir); 
}           

no *remover(no *r, int x){
    if(r == NULL) return NULL; 
    if(x < r->chave) r->esq = remover(r->esq, x); 
    else if(x > r->chave) r->dir = remover(r->dir, x); 
    else{
        if(r->dir == NULL) return r->esq; 
        else if(r->esq == NULL) return r->dir; 
        else{
            no *substituto = maximo(r->esq); 
            r->chave = substituto->chave; 
            r->esq = remover(r->esq, substituto->chave);  
        }
    } 
    return r; 


}