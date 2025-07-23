#include<stdio.h>
#include<stdlib.h>


int main(){

    int n; scanf("%d", &n); 

    char *palindromo = malloc(n*sizeof(char)+2); 
    scanf("%s", palindromo); 

    int l = 0, r = n-1;
    
    int flag = 1; 
    while(l < r){
        if(palindromo[l] == palindromo[r]){
            l++; 
            r--; 
        }else {
            flag = 0; 
            break;
        }

    } 

    if(flag == 0) printf("%d\n", 0); 
    else printf("%d\n", 1);



    return 0; 
}