#include <stdio.h>
#include <string.h>

char *trocar(char palavra[], char completa[], int tam, int idx, int i, int j){
    if (palavra[j] == '\0') {
        completa[tam] = '\0';
        return completa;
    }

    if (palavra[j] != 'x') {
        completa[i] = palavra[j];
        return trocar(palavra, completa, tam, idx, i + 1, j + 1);
    } else {
        completa[idx] = 'x';
        return trocar(palavra, completa, tam, idx - 1, i, j + 1);
    }
}

int main(){
    char palavra[300]; scanf("%s", palavra);
    
    int tam = strlen(palavra);

    char nova[300];

    printf("%s\n", trocar(palavra, nova, tam, tam - 1, 0, 0));
    return 0;
}

