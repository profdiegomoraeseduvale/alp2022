#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "dividir.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float dividirNumeros(float x, float y){
		return x/y;
	}
	
	
	float valor1, valor2;
	
	printf("Digite o valor 1: \n");
    scanf("%f",&valor1);
    
    printf("Digite o valor 2: \n");
    scanf("%f",&valor2);

	
	printf("A divisão é %.2f", dividirNumeros(valor1,valor2));
	
	
	return 0;
}


