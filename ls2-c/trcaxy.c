#include<stdio.h>
#include<string.h>


char *trocaxy(char *palavra, char *nova, int tam, int i){
	if(tam == i){ 
		nova[i] = '\0';
		return nova; 
	}
	if(palavra[i] == 'x'){
	   nova[i] = 'y';
	   return trocaxy(palavra, nova, tam, i+1); 
	}else{
	   nova[i] = palavra[i]; 
	   return trocaxy(palavra, nova, tam, i+1); 
	}

}

int main(){
	
	char palavra[81]; scanf("%s", palavra);
	char nova[81]; 
		
	int tam = strlen(palavra); 
	
	printf("%s\n", trocaxy(palavra, nova, tam, 0));



return 0;
}
