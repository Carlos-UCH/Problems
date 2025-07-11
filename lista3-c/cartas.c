#include<stdio.h>
#include<stdlib.h>


typedef struct fila{
    int *dados; 
    int N, p, u; 
}fila; 


fila *criar_fila(int n){
    fila *f = malloc(sizeof(fila)); 
    f->dados = malloc(n*sizeof(int)); 
    f->N = n; 
    f->p = 0; 
    f->u = 0; 
    return f; 
}

void enfileira(fila *f, int x){
    if(f->u == f->N) {
        f->dados = realloc(f->dados, 2*f->N*sizeof(int)); 
        f->N*=2; 
    }
    f->dados[f->u] = x;
    f->u++;  
}

int desenfileira(fila *f){
    int valor = f->dados[f->p]; 
    f->p++; 
    return valor;
    
}

int main(){

    int n; scanf("%d", &n); 

    fila *f = criar_fila(n); 

    for(int i = 1; i <= n; i++) enfileira(f, i); 
    

    printf("Cartas descartadas:");
    while(f->p != f->u-1){
        printf(" %d", desenfileira(f));
        if(f->p != f->u-1) printf(",");
        enfileira(f, desenfileira(f));
    } 

    printf("\nCarta restante: %d\n", f->dados[f->p]);
    



    return 0; 
}