#include<stdio.h>
#include<stdlib.h>


void regua(int n){
    if(n == 0) return; 

    regua(n-1); 
    printf(".");
    for(int i = 0; i < n; i++) printf("-");
    printf("\n");
    regua(n-1); 
    



}

int main(){

    int n; scanf("%d", &n); 

    regua(n); 


    return 0; 
}