#include <stdio.h>


int main()
{


//Declaração de Variáveis

	float litros, distancia, consumo;

//Entrada de Dados

    printf("Digite o valor de litros consumidos: \n");
    scanf("%f",&litros);

    printf("Digite o valor da distância: \n");
    scanf("%f",&distancia);

//Processamento

    consumo = distancia/litros;


//Saída de Informações

    printf("O consumo médio do veículo é de %.1f km/L",consumo);

return 0;
	
}