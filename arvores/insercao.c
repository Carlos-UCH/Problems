#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int chave;
    struct no *esq, *dir; 
}no; 

no *inserir(no *r, int x){
    if(r == NULL){
        no *novo = malloc(sizeof(no)); 
        novo->chave = x; 
        novo->dir, novo->esq = NULL;
        return novo;  
    }else{
        if(x == r->chave) return r; 
        if(x > r->chave) r->dir = inserir(r->dir, x); 
        else r->esq = inserir(r->esq, x); 
        return r; 
    }
}