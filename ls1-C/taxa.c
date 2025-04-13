#include<stdio.h>


int main() {
    int d, disciplina, alunos, aprovados, a, s, m;
    scanf("%d", &d);

    while(scanf("%d %d %d", &a, &s, &m) != EOF) {
        int dados[m][2];
        int materias_rep[d], x;


        for(int i = 0; i < d; ++i) {
            materias_rep[i] = -1;
        }
        int max_rep = -1;
        for(int i = 0; i < m; ++i) {
            scanf("%d %d %d", &disciplina, &alunos, &aprovados);
            int reprovados = alunos - aprovados;
            dados[i][0] = disciplina;
            dados[i][1] = reprovados;

	    if(reprovados > max_rep) max_rep = reprovados;
        }

	int CodaFofo = 0;
        for(int i = 0; i < m; ++i) {
            if(dados[i][1] == max_rep) {
                materias_rep[CodaFofo++] = dados[i][0];
            }
        }

        for (int i = 0; i < CodaFofo-1; ++i) {
            for (int j = i + 1; j < CodaFofo; ++j) {
                if (materias_rep[i] > materias_rep[j]) {
                    x =  materias_rep[i];
			    materias_rep[i] = materias_rep[j];
                    materias_rep[j] = x;
 
                }
            }
        }

        printf("%d/%d\n", a, s);
        for(int i = 0; i < CodaFofo; ++i)
                printf("%d ", materias_rep[i]);
            
        printf("\n\n");
    }

    return 0;
}
