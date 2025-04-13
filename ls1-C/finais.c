#include<stdio.h>
#include<string.h>

int encaixa(int a, int b){
	char str[256], str2[256];
	int qnta, qntb;

	sprintf(str, "%d", a);
	sprintf(str2, "%d", b);
	
	for(qnta = 0; str[qnta]!='\0';qnta++);
	for(qntb = 0; str2[qntb]!='\0';qntb++);

	if(qntb > qnta) return 0; 

	for(int j = 0; j < qntb; j++){
		if(str2[j] != str[qnta - qntb + j]) return 0;
	}
	
	return 1; 
}

int segmento(int a, int b) {
	char str[256], str2[256];
	sprintf(str, "%d", a);
	sprintf(str2, "%d", b);

	if(strlen(str) < strlen(str2)){
		if(strstr(str2, str)) return 1;
	}else{
		if(strstr(str, str2)) return 1;
	}
return 0;

}


