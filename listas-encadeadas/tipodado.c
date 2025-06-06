#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Pessoa{
	int idade; 
	char nome[100]; 
	char sexo; 

}Pessoa; 


int main(){
	Pessoa pessoa1; 

	strcpy(pessoa1.nome, "John Doe"); 
	pessoa1.idade = 20; 
	pessoa1.sexo = 'M'; 

	

	printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);


return 0; 
}
