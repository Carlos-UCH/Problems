#include<stdio.h>

int rumo9(int soma, int count){
	if(soma == 9) return count;
	int aux = 0; 

	while(soma != 0){
	    aux+= soma%10; 
	    soma/=10; 
	}

	return rumo9(aux, count+1);	
}


int main(){

char n[1001]; 

while(1) {
	scanf("%s", n); 
	if(n[0] == '0' && n[1] == '\0') break;

	int soma = 0;
	for(int i = 0; n[i] != '\0'; i++) soma += n[i] - '0';

if(soma%9 != 0) printf("%s is not a multiple of 9.\n", n);
else 
	printf("%s is a multiple of 9 and has 9-degree %d. \n", n, rumo9(soma, 1));
}



return 0;

}
