#include<stdlib.h>
#include<stdio.h>

int main(void) {
    int qtdPessoasEntrevistadas, idosos, adultos, jovens; 
    idosos = adultos = jovens = 0;
    printf("Digite a quantidade de pessoas a serem entrevistadas: ");
    scanf("%d", &qtdPessoasEntrevistadas);
    int vetor[qtdPessoasEntrevistadas];
    for (int i = 0; i < qtdPessoasEntrevistadas; i++) {
        printf("\nDigite a idade da %dª pessoa entrevistada: ", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] < 18 || vetor[i] > 80) {
            printf("Erro! A pesquisa corresponde a pessoas entre 18 e 80 anos.\nDigite uma idade entre 18 e 80 anos!\n");
            i--; //para repetir a entrada de idade
        } else if (vetor[i] >= 65) {
            idosos++;
        } else if (vetor[i] >= 35 && vetor[i] < 65) {
            adultos++;
        } else if (vetor[i] >= 18 && vetor[i] < 35) {
            jovens++;
        }
    }
    printf("\n\nA pesquisa foi realizada com %d pessoas.\nOnde foram entrevistados:\n%d Idosos\n%d Adultos\n%d Jovens\n", qtdPessoasEntrevistadas, idosos, adultos, jovens);
    return 0;
}