#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int encaixa(int a, int b){
    
    int aux = 0, aux1 = 0; 
    int b1 = b; int a1 = a; 
    while(a1!=0){
        a1/=10; 
        aux++; 
    }

    while(b1!=0){
        b1/=10; 
        aux1++; 
    }
    
    if(aux1 > aux) return 0; 

    while(b!=0){
        int fima = a%10; 
        int fimb = b%10; 
        if(fima != fimb) return 0; 
        a/=10; 
        b/=10; 
    }

    return 1; 


}

