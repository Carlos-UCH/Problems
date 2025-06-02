#include<stdio.h>
#include<stdlib.h>


int buscabinaria(int *v, int *dados, int n, int x){
	int e = -1, d = n; 
	while(e < d-1){
		int m = (e+d)/2;
		if(x > v[m]) e = m;
		else d = m; 
	}
	return d; 
}

int main(){

	int n, m; scanf("%d %d", &n, &m);
	int *v = malloc(n*sizeof(int)); 
	int *dados = malloc(m*sizeof(int)); 

	for(int i = 0; i < n; i++) scanf("%d", &v[i]);
	for(int i = 0; i < m; i++) scanf("%d", &dados[i]);

	for(int j = 0; j < m; j++) printf("%d\n", buscabinaria(v,dados,n,dados[j]));  

return 0; 

}
