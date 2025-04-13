#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

int f, l; scanf("%d %d", &f, &l);
char cinema[f][l]; 
char lugar[4]; 


for(int i =0; i < f; ++i){
   for(int j = 0; j < l; ++j){
	cinema[i][j] = 0;
   }

}


while(scanf("%s", lugar) != EOF){
	char fileira = lugar[0];
	int num = atoi(&lugar[1]);

	int idxfileira = fileira - 'A'; //Valor ASCII... Quero descobrir a distancia	
	int idxnum = num - 1; //Matriz conta do 0;

	cinema[idxfileira][idxnum] = 1;
}



printf("  ");
for(int i = 1; i <= l; ++i){
	printf("%02d ", i);
}
printf("\n");

for(int i = f-1; i >= 0; --i){
printf("%c ", 'A'+i);

for(int j = 0; j < l; ++j){
	if(cinema[i][j]==1) printf("%s ", "XX");
	else printf("%s ", "--");

}
printf("\n");

}






return 0; 
}
