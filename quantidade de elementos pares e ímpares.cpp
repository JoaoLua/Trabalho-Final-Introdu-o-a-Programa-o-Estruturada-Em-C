#include<stdio.h>
#include<stdlib.h>

int main(void){
	int quantidadePar, quantidadeImpar, tamanhoVetor;
	
	printf("Digite a quantidade de numeros a ser inserida no vetor: ");
	scanf("%d", &tamanhoVetor);
	int vetor[tamanhoVetor];
	
	for (int i=0; i<tamanhoVetor; i++){
		printf("Digite o valor %d a ser inserido no vetor: ", i+1);
		scanf("%d", &vetor[i]);
		if (vetor[i]%2 == 0)
			quantidadePar++;
		else 
			quantidadeImpar++;
	}
	printf("\n\nO vetor possui %d numeros pares e %d de numeros impares!", quantidadePar, quantidadeImpar);
}