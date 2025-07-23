#include<stdio.h>
#include<stdlib.h>


typedef struct no{
    int chave; 
    struct no *esq, *dir; 
}no; 


int altura(no *raiz){
    if(raiz == NULL) return 0; 

    int altDireita = altura(raiz->dir); 
    int altEsquerda = altura(raiz->esq);

    if(altDireita > altEsquerda) return altDireita + 1; 
    else return altEsquerda + 1; 

}