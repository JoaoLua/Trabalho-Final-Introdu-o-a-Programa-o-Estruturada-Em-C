#include<stdio.h>
#include<stdlib.h>

int main(void){
	float imc, peso, altura;
	printf("CALCULADORA DE IMC (INDICE DE MASSA CORPORAL)");
	printf("\nDigite seu peso (em quilogramas): ");
	scanf("%f", &peso);
	printf("\nDigite sua altura(em metros, utilizando '.'): ");
	scanf("%f", &altura);
	imc = peso/(altura*altura);
	if (imc >= 40){
		printf("\n\nSeu IMC e de: %.2f\nE voce esta em obesidade grau III.", imc);
	} else if(imc <= 39.9 && imc >= 35){
		printf("\n\nSeu IMC e de: %.2f\nE voce esta em obesidade grau II.", imc);
	} else if(imc <= 34.9 && imc >= 30){
		printf("\n\nSeu IMC e de: %.2f\nE voce esta em obesidade grau I.", imc);
	} else if(imc <= 29.9 && imc >= 25){
		printf("\n\nSeu IMC e de: %.2f\nE voce esta em Sobrepeso.", imc);
	} else if(imc <= 24.9 && imc >= 18.5){
		printf("\n\nSeu IMC e de: %.2f\nE voce esta em peso normal.", imc);
	} else if(imc < 18.5 ){
		printf("\n\nSeu IMC e de: %.2f\nE voce esta abaixo do peso.", imc);
	}
	return 0;
}