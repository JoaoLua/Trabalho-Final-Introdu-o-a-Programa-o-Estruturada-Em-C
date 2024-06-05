#include<stdio.h>
#include<stdlib.h>

int main(void){
	int valorReferencia, vetor[10], igual;
	igual = 0;
	
	for (int i=0; i<10; i++){
		printf("Digite o %d valor do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n");
	printf("Digite o valor de referencia: ");
	scanf("%d", &valorReferencia);
	
	for (int i=0; i<10; i++){
		if (vetor[i] > valorReferencia)
			printf("\nO valor %d e maior que o valor de referencia!");
		if (vetor[i] == valorReferencia)
			igual++;
	}
	printf("\nO valor de referencia aparece %d vezes dentro do vetor!", igual);
	return 0;
}