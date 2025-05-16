#include<stdio.h>


int pa_recursiva (int *v, int primeiro, int ultimo){
	if(primeiro >= ultimo) return 1;
		
	int aux = v[primeiro] + v[ultimo]; 

	if(aux != v[primeiro + 1] + v[ultimo-1]) return 0;

	return pa_recursiva(v, primeiro+1, ultimo-1); 
	
}
