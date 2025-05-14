#include <stdio.h>

void desenharMarca(int nivel) {
    printf(".");
    for (int i = 0; i < nivel; i++)printf("-");
    printf("\n");
}

void desenharR(int inicio, int fim, int nivel) {
    if (nivel == 0) return;

    int meio = (inicio + fim) / 2;

    desenharR(inicio, meio, nivel - 1);

    desenharMarca(nivel);

    desenharR(meio, fim, nivel - 1);
}


void desenharRegua(int niveis) {
    int totalDivisoes = 1 << niveis; //2^n
    desenharR(0, totalDivisoes, niveis);
}

int main() {
    int niveis;
    scanf("%d", &niveis);

    desenharRegua(niveis);

    return 0;
}

