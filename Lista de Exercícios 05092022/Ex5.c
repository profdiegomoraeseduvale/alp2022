#include <stdio.h>
#include <math.h>


int main()
{


//Declaração de Variáveis

	float cat1, cat2, hipot;
 


//Entrada de Dados

	printf("Digite o valor do cateto 1: \n");
	scanf("%f", &cat1);

	printf("Digite o valor do cateto 2: \n");
	scanf("%f", &cat2);

 
//Processamento

	hipot=sqrt(pow(cat1,2)+pow(cat2,2));


//Saída de Informações

	printf("O valor da hipotenusa é %.1f",hipot);



return 0;
	
}