#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	float entrada;
	//O loop de verificação do valor de entrada.
	do {
		printf("R$: ");
		scanf("%f", &entrada);
		//O valor de entrada não pode ser menor que zero.
	} while (entrada <= 0);

	//Formula para transformar um número com casas decimais em inteiro.
	int dinheiro = round(entrada*100);
	int centavos = 0;

	while (dinheiro >= 25){
		dinheiro -= 25;
		centavos++;
	}
	while (dinheiro >= 10){
		dinheiro -= 10;
		centavos++;
	}
	while (dinheiro >= 5){
		dinheiro -= 5;
		centavos++;
	}
	while (dinheiro >= 1){
		dinheiro -= 1;
		centavos++;
	}
	printf("Troco: %i centavos\n", centavos);
}
