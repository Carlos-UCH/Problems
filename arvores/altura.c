#include<stdio.h>
#include<stdlib.h>


typedef struct no{
    int chave; 
    struct no *esq, *dir; 
}no; 

int altura(no *r){
    if(r == NULL) return 0; 
    int Alturaesquerda = altura(r->esq);
    int Alturadireita = altura(r->dir); 
   
    if(Alturadireita > Alturaesquerda) return Alturadireita +1; 
    else return Alturaesquerda + 1; 

}