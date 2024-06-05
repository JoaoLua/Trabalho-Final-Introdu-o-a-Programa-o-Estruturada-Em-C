#include<stdio.h>
#include<stdlib.h>

tabuada(int num){
	int res;
	for(int i=1; i<=10; i++){
		res = num * i;
		printf("%dx%d=%d\n", num, i, res);
	}
	return(0);
}

int main(void){
	int num;
	printf("TABUADA\n\nDigite o Numero a Ser Calculado: ");
	scanf("%d", &num);
	tabuada(num);
}