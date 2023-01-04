/*
* Implementacao simples de uma calculadora de salario.
* Autor: Renan Vinicius Nikodem Bick - UFSM - Santa Maria - RS
* Data: janeiro de 2023
* Versao: 1.0
* Uso didático.
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
	float entrada = 0, saida = 0, total, valor, recebido;
	printf("bem vindo a calculadora de salario!\ncoloque as horas trabalhadas e o valor da sua hora para saber o quanto vai receber.\n\n");
	printf("digite -1 na entrada e saida para encerrar.\n\n");
	do{
	printf("hora de entrada: ");
	scanf("%f", &entrada);
	printf("hora de saida: ");
	scanf("%f", &saida);
	total = total + (saida - entrada);
	printf("\n%.2f\n", total);
	}while(entrada != -1);
	printf("digite o valor da hora: ");
	scanf("%f", &valor);
	
	recebido = total * valor;
	
	printf("\nvoce deve receber $%.2f reais\n", recebido);
	
	return 0;
}