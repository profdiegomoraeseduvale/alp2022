#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2;
	
	printf("Digite o valor 1: \n");
    scanf("%d",&valor1);
    
    printf("Digite o valor 2: \n");
    scanf("%d",&valor2);

	
	printf("A soma � %d", somarNumeros(valor1,valor2));
	
	
	return 0;
}

//Programa��o da Fun��o
int somarNumeros(int x, int y){
    return x+y;
}
