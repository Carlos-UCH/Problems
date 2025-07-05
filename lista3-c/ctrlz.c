#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pilha{
  char **dados;
  int N, topo; 
}pilha; 

pilha *criar_pilha(int N){
  pilha *p = malloc(sizeof(pilha));
  p->dados = malloc(N*sizeof(char*)); 
  p->N = N; 
  p->topo = 0; 
  return p; 
}


char *desempilha(pilha *p){
  if(p->topo == 0) return "NULL"; 
  p->topo--; 
  return p->dados[p->topo];
}

void empilha(pilha *p, char *comando){
  if(p->topo == p->N){
    p->dados = realloc(p->dados, 2*p->N*sizeof(char*));
    p->N*=2; 
  }
  p->dados[p->topo] = strdup(comando); 
  p->topo++;
  
}


int main(){

  char comando[200]; 
  int N = 200; 
  pilha *p = criar_pilha(N); 

  while(fgets(comando, sizeof(comando), stdin)){
    comando[strcspn(comando, "\n")] = 0;
    if(strcmp(comando, "desfazer") == 0){  
      char *novo = desempilha(p);
      
      if (novo[0] == 'i' && novo[1] == 'n' && novo[2] == 's' && novo[3] == 'e' &&
        novo[4] == 'r' && novo[5] == 'i' && novo[6] == 'r' && novo[7] == ' ') {
        novo += 8;  
    }
      printf("%s\n", novo);

    }else{ 
      empilha(p, comando); 
    }
  
  }

  

return 0; 
}
