#include <stdio.h>


int main()
{


//Declaração de Variáveis

	float velocidaderadar, velocidadereal;



//Entrada de Dados

	printf("Informe o valor da velocidade capturada pelo radar: \n");
	scanf("%f",&velocidaderadar);


//Processamento

	velocidadereal = velocidaderadar - (velocidaderadar*0.057); 


//Saída de Informações
	
    printf("Velocidade radar: %.1f \n",velocidaderadar);
	printf("Velocidade real: %.1f \n",velocidadereal);

  return 0;
	
}