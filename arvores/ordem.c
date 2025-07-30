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

void em_ordem(no *raiz){
    pilha *p = criar_pilha(1000);
    no *atual = raiz; 

    while(atual != NULL || p->topo > 0){
        while(atual != NULL){
            empilha(p, atual); 
            atual = atual->esq; 
        }
        atual = desempilha(p);
        printf(" %d", atual->dado); 
        atual = atual->dir;  
    }

}
