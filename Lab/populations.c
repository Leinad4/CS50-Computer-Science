/*Esse laboratório tem como objetivo, descobrir em quantos anos levaria 
para um criador de Ihamas adquirir um total desejado de Ihamas.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Variaveis necessárias (qtd = quantidade)
	long qtd_atual, qtd_final;
	int a = 0;
	int qtd_1, qtd_2, total = 0, novo = 0;

	//Solicitar o valor inicial do usuário
	do {
		printf("Start Size: ");
		scanf("%lu", &qtd_atual);
	} while (qtd_atual < 9);

	//Solicitar o valor final do usuário
	do {
		printf("End Size: ");
		scanf("%lu", &qtd_final);
	} while (qtd_final <= qtd_atual);

	//Calcule o número de anos até o limite
	for (a = 0; qtd_atual < qtd_final; a++){
		qtd_1 = qtd_atual / 3;
		qtd_2 = qtd_atual / 4;
		total = ((qtd_atual + qtd_1) - qtd_2);
		novo = total;
		qtd_atual = novo;
	}

	//Imprimindo o número de anos
	printf("Years: %d\n", a);







}
