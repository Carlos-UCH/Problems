#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct pilha{
    int N, topo; 
    char *dado;      
}pilha; 


pilha *criar_pilha(int N){
    pilha *p = malloc(sizeof(pilha)); 
    p->dado = malloc(N*sizeof(char)); 
    p->N = N; 
    p->topo = 0; 
    return p; 
}


void empilha(pilha *p, char x){
    if(p->topo == p->N){
        p->dado = realloc(p->dado, 2*p->N*sizeof(char)); 
        p->N*=2; 
    }

    p->dado[p->topo] = x; 
    p->topo++; 
}

void desempilha(pilha *p ){
    p->topo--;
}

int main(){

    char exp[510]; scanf("%s", exp); 
    
    pilha *p = criar_pilha(500); 

    for(int i = 0; i < strlen(exp); i++){
        if(exp[i] == '{' || exp[i] == '[' ||  exp[i] == '(') empilha(p, exp[i]);  

        if(exp[i] == '}'){
            if(p->topo > 0 && p->dado[p->topo-1] == '{') desempilha(p); 
            else{
                printf("nao\n"); 
                return 0; 
            }

        }

        if(exp[i] == ']'){
            if(p->topo > 0 && p->dado[p->topo-1] == '[') desempilha(p); 
            else{
                printf("nao\n"); 
                return 0; 
            }

        }

        if(exp[i] == ')'){
            if(p->topo > 0 && p->dado[p->topo-1] == '(') desempilha(p); 
            else{
                printf("nao\n"); 
                return 0; 
            }

        }
    }

    if(p->topo == 0) printf("sim\n"); 
    else printf("nao\n"); 

    return 0; 
}