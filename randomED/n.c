#include<stdio.h>
#include<stdlib.h>


#define MAX 1000000
#define TAM_CIDADE 26

int main(){
    char fila[MAX][TAM_CIDADE]; 
    int inicio = 0, fim = 0; 
    while(scanf("%s", fila[fim])!= EOF){
        fim++; 
    }
    while(inicio < fim){
        printf("%s\n", fila[inicio]); 
        char ultimaletra = fila[inicio][strlen(fila[inicio])-1];
        inicio++; 
        if(tolower(fila[inicio][0]) == tolower(ultimaletra)){
            strcpy(fila[fim], fila[inicio]); 
            inicio++; 
            fim++;
        }
    }
}