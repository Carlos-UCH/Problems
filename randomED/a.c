#include<stdio.h>
#include<stdlib.h>

typedef struct celula{
    int dado; 
    char comando[20]; 
}celula; 


void troca(celula *a, celula *b){
    celula aux = *a; 
    *a = *b; 
    *b = aux; 
}

void insertion(celula *vetor, int n){
    for(int i = 1; i < n; i++){
        for(int j = i - 1; j>=0 && vetor[j].dado > vetor[j+1].dado; j--){
            troca(&vetor[j], &vetor[j+1]); 
        }
    } 
}

int buscabinaria(celula *vetor, int n, int x){
    int l = 0, r = n-1; 

    while(l <= r){
        int mid = (l+r)/2; 
        if(vetor[mid].dado == x) return mid; 
        else if(vetor[mid].dado < x) l = mid + 1; 
        else r = mid - 1; 
    }

    return -1; 
}

int main(){

    int n; scanf("%d", &n);
    int codigo; char comando[20]; 

    celula *vetor = malloc(n*sizeof(celula)); 
    
    for(int i = 0; i < n; i++) scanf("%d %s", &vetor[i].dado, vetor[i].comando); 
    
    insertion(vetor, n); 

    int x = 0; 
    while(scanf("%d", &x)!= EOF){
        int valor = buscabinaria(vetor, n, x); 

        if(valor == -1) printf("undefined\n"); 
        else printf("%s\n", vetor[valor].comando); 
    }


    return 0; 
}