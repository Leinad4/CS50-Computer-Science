#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	//Vai analisar o tamanho da altura.
	do {
		printf("Height: ");
		scanf("%d", &n);
	} while (n < 1 || n > 8);
	// Esse lop vai controlar as linhas.
	for (int l = 0; l < n; l++){
		// Esse lop vai controlar as colunas.
		for (int c = 0; c < n; c++){
			// Condição sendo True: Vai ter o espaço
			// Condição sendo False: Vai ter Hashtag 
			if (l + c < n - 1){
				printf(" ");
			} else {
				printf("#");
			}
		}
		// Terminando o segundo lop "for", quebra a linha e vai para o primeiro lop novamente. 
		printf("\n");
	}
}
