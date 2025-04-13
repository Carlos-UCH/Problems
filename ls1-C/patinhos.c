#include <stdio.h>
#include <string.h>
#define MAX 1003

int visitados[MAX][MAX];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int achouYogi = 0, buracos =0;

void dfs(int i, int j, int n, int m, char mapa[][MAX]) {
    visitados[i][j] = 1;

    if (mapa[i][j] == 'o') {
        buracos++;
    }
    if (mapa[i][j] == 'E') {
        achouYogi = 1;
    }

    for (int k = 0; k < 4; k++) {
        int vizinhoi = i + dx[k];
        int vizinhoj = j + dy[k];

        if (vizinhoi >= 0 && vizinhoi < n && vizinhoj >= 0 && vizinhoj < m) {
            char atual = mapa[vizinhoi][vizinhoj];
            if (!visitados[vizinhoi][vizinhoj] && (atual == '_' || atual == 'o' || atual == 'E')) {
                dfs(vizinhoi, vizinhoj, n, m, mapa);
            }
        }
    }
}

int main() {
    char mapa[MAX][MAX];
    int patos; scanf("%d", &patos);

    int linhas = 0, colunas=0, X, Y;
    while (scanf("%s", mapa[linhas]) != EOF) {
        linhas++;
    }

    for(int i = 0; mapa[0][i]!='\0'; ++i) colunas++; 

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (mapa[i][j] == 'S') {
                X = i;
                Y = j;
                break;
            }
        }
    }

    dfs(X, Y, linhas, colunas, mapa);

    int vivos = patos - buracos; 
    if (!achouYogi) {
        printf("Todos morreram :)\n");
    } else if (buracos == 0) {
        printf("Nenhum morreu :(\n");
    } else if (patos <= buracos) {
        printf("Todos morreram :)\n");
    } else {
        printf("%d encontraram o vovo\n", vivos);
    }

    return 0;
}

