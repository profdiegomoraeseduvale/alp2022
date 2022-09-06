#include <stdio.h>


int main()
{


//Declaração de Variáveis

	float f,c;


//Entrada de Dados

	printf("Digite o valor em graus Fahrenheit: \n");
	scanf("%f",&f);

 
//Processamento

	c=(f-32)*5/9;


//Saída de Informações

	printf("%.1f graus Fahrenheit equivalem a %.1f graus Celsius",f,c);

return 0;
	
}