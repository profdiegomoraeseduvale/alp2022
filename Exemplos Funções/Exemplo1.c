#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[80];
	
	printf("Digite um nome: \n");
    scanf("%[^\n]",nome);

	
	imprimeNome(nome);
	
	return 0;
}

//Programa��o da Fun��o
void imprimeNome(char texto[80]){
  printf("O nome digitado � %s", texto);
}
