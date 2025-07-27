#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int dado; 
    struct no *esq, *dir; 
}no; 

typedef struct pilha{
    no **dados;
    int N, topo;  
}pilha; 

pilha *criar_pilha(int N){
    pilha *p = malloc(sizeof(pilha)); 
    p->dados = malloc(N*sizeof(no*));
    p->N = N; 
    p->topo = 0;
    return p; 
}

void empilha(pilha *p, no *x){
    if(p->topo == p->N){
        p->dados = realloc(p->dados, 2*p->N*sizeof(no*));
        p->N*=2;  
    }

    p->dados[p->topo] = x; 
    p->topo++; 
}

no *desempilha(pilha *p){
    p->topo--; 
    return p->dados[p->topo]; 
}  

void pre_ordem(no *raiz){
    if(raiz == NULL) return NULL; 

    pilha *p1 = criar_pilha(100); 
    empilha(p1, raiz); 

    while(p1->topo != 0){
        no *atual = desempilha(p1); 

        printf(" %d", atual->dado);
        
        if(atual->dir != NULL) empilha(p1, atual->dir); 
        if(atual->esq != NULL) empilha(p1, atual->esq); 
    }
}
