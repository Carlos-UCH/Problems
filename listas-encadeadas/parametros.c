#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Pessoa{
	char nome[100]; 
	char sexo; 
	int idade; 
}Pessoa; 

void setPessoa(Pessoa *pessoa, char *nome, char sexo, int idade){
	strcpy(pessoa->nome, nome); 
	pessoa->sexo = sexo; 
	pessoa->idade = idade; 
}

void imprimir(Pessoa *pessoa1){
	printf("Nome: %s\nSexo: %c\nIdade: %d\n", pessoa1->nome, pessoa1->sexo, pessoa1->idade);

}


int main(){
	
	Pessoa pessoa1; 
	setPessoa(&pessoa1, "Guest", 'M', 20); 
	imprimir(&pessoa1); 


return 0; 

}
