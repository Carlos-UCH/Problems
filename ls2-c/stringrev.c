#include<stdio.h>

void reverso(char str[], int i){
	if(str[i] == '\0') return;
	reverso(str, i+1);
	printf("%c", str[i]);
}

int main(){
   
    char nome[501]; scanf("%s", nome);

    reverso(nome, 0);
    printf("\n");
        	


return 0; 
}
