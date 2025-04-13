#include <stdio.h>

int main(){
	int baseD; scanf("%d", &baseD);
	int topD; scanf("%d", &topD); 

	int baseE = 160-baseD; 
	int topE = 160-topD;

	int trapD= ((baseD + topD)*70)/2; 
	int trapE= ((baseE + topE)*70)/2;

	if(trapD > trapE) printf("%d\n", 1); 
	else if(trapD < trapE) printf("%d\n", 2);
	else printf("%d\n", 0);
	


return 0; 
}
