#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int chave; 
    struct no *esq, *dir; 
}no;

int numero_folhas(no *r){
    if(r=NULL) return 0; 

    if(r->dir == NULL && r->esq == NULL) return 1; 
    
    return numero_folhas(r->esq) + numero_folhas(r->dir);


}