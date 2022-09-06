#include <stdio.h>
#include <math.h>


int main()
{


//Declaração de Variáveis

	float salario, reajuste, salarionovo;

 


//Entrada de Dados

	printf("Digite o valor do salário atual: \n");
	scanf("%f",&salario);

	printf("Digite o valor do percentual de reajuste: \n");
	scanf("%f",&reajuste);


 
//Processamento

	salarionovo = salario+(salario*(reajuste/100));
	


//Saída de Informações

	printf("Salário Atual: R$%.2f \n",salario);
	printf("Reajuste: %.1f% \n",reajuste);
	printf("Salário Reajustado: R$%.2f \n",salarionovo);



return 0;
	
}