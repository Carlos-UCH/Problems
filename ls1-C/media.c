#include<stdio.h>


int main(){

    int n; scanf("%d", &n);
    int vet[n];
    long long int count = 0;
    int flag = 0;
    for(int i = 0; i < n; ++i) {
	    scanf("%d", &vet[i]);
		count+=vet[i];
    }

    int media = count/n; 

    for(int i = 0; i < n; i++){
	    if(vet[i] > media){ 
		    if(flag) printf(" ");
		    printf("%d", vet[i]);
		    flag = 1;
	    }
}

if(!flag) printf("%d", 0);
printf("\n");


return 0;
}
