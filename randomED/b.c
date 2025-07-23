#include<stdio.h> 
#include<stdlib.h>
#include<string.h>


typedef struct pilha{
    int N, topo; 
    char **dados; 
}pilha; 


pilha *criar_pilha(int N){
    pilha *p = malloc(sizeof(pilha)); 
    p->dados = malloc(N*sizeof(char*));
    p->N = N; 
    p->topo = 0; 
    return p; 
}


char *desempilha(pilha *p){
    if(p->topo == 0) return "NULL"; 
    p->topo--;
    return p->dados[p->topo]; 
}


void empilha(pilha *p, char *x){
    if(p->topo == p->N){
        p->dados = realloc(p->dados, 2*p->N*sizeof(char*)); 
        p->N*=2; 
    }

    char *valor = malloc(110); 
    
    strcpy(valor, x);
    p->dados[p->topo] = valor;
    p->topo++;  
}

int main(){

    char comando[200]; 

    pilha *p = criar_pilha(200); 

    while(fgets(comando, sizeof(comando), stdin)){
        if(strcmp(comando, "desfazer") == 0 || strcmp(comando, "desfazer\n") == 0) {
            char *valor = desempilha(p);
            if(strcmp("NULL", valor) == 0) printf("NULL\n"); 
            else printf("%s\n", valor+8);              
       }else empilha(p, comando); 

    }


    return 0; 
}