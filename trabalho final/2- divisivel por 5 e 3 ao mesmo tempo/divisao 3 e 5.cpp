#include<stdio.h>
#include<stdlib.h>

int main(void){
	int tamanhoVetor, divisivel;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanhoVetor);
	int vetor[tamanhoVetor];
	
	for (int i=0; i<tamanhoVetor; i++){
		printf("Digite o %d valor a ser adicionado ao vetor: ", i+1);
		scanf("%d", &vetor[i]);
		if (vetor[i]%3 == 0 &&1
		 vetor[i]%5 ==0)
			divisivel++;
	}
	printf("Entre os %d numeros digitados, apenas %d sao divisiveis por 3 e 5 ao mesmo tempo!", tamanhoVetor, divisivel);
}