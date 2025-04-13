#include<stdio.h>


int main(){

	int v; scanf("%d", &v);
	
	for(int i = 0; i < v; i++){
		int n; scanf("%d", &n);
	
	char *unidades[] = {"","I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
	char *dezenas[] = {"", "X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};

	char *centenas[] = {"", "C","CC","CCC","CD","D","DC", "DCC","DCCC","CM"};

	char *milhares[] = {"", "M","MM","MMM"};

	int mil = n/1000;
	n = n%1000;

	int cent = n/100;
	n = n%100;

	int dez = n/10;
	n = n%10; 

	int unid = n;

	char result[256];

	printf("%s%s%s%s\n", milhares[mil], centenas[cent], dezenas[dez], unidades[unid]);
	}
return 0; 
}
