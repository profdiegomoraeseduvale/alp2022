#include <stdio.h>


int main()
{


//Declaração de Variáveis

	char nome[80];
	float salariobruto, salarioliquido;

//Entrada de Dados

	printf("Digite o nome do funcionário: \n");
	scanf("%[^\n]", nome);

	printf("Digite o salário bruto: \n");
	scanf("%f",&salariobruto);

 

//Processamento

	salarioliquido=salariobruto-(salariobruto*0.11);



//Saída de Informações

	printf("Nome do funcionário: %s \n",nome);
	printf("Salário Bruto: R$%.2f \n",salariobruto);
	printf("Salário Líquido: R$%.2f",salarioliquido);

 return 0;
	
}