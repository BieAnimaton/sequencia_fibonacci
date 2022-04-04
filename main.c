#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, contador, numero, numero_ant = 1, numero_dps = 0;
	
	printf("Digite o valor de 'n': ");
	scanf("%d", &n);
	
	printf("\nA Sequência Fibonacci fica: ");
	printf("%d, %d, ", 0, numero_ant);
	for (contador = 1; contador <= n-1; contador++) {
		numero_ant = numero_dps;
		numero_dps = numero;
		numero = numero_ant + numero_dps;
		printf("%d", numero);
		if (contador <= n-2) {
			printf(", ");
		}
	}
	
	return 0;
}
