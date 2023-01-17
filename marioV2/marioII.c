#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;
	do {
		printf("Height: ");
		scanf("%d", &n);
	} while (n < 1 || n > 8);
	for (int l = 0; l < n; l++){
		for (int c = 0; c < n; c++){
			if (l + c < n - 1){
				printf(" ");
			} else {
				printf("#");
			}
		}
		printf("  "); // Espaço entre as pirâmides
		// Vai construir a segunda pirâmide. 
		for (int j = 0; j < n; j++){
			if (j + l < n - 1){
			      //printf(""); 
			} else {
				printf("#");
			}
		}
		printf("\n");
	}
}
