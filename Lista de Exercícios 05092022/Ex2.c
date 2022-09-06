#include <stdio.h>


int main()
{


//Declaração de Variáveis
	float minutos, horas;


//Entrada de Dados

	printf("Digite o os minutos: \n");
	scanf("%f",&minutos);

//Processamento

	horas = minutos/60;

//Saída de Informações

	printf("%.1f minutos equivalem a %.1f horas",minutos,horas);


return 0;
	
}