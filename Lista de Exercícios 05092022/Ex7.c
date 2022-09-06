#include <stdio.h>


int main()
{


//Declaração de Variáveis

	float base, altura, area;

//Entrada de Dados

    printf("Digite o valor da base do retangulo: \n");
    scanf("%f",&base);

    printf("Digite o valor da altura do retangulo: \n");
    scanf("%f",&altura);

//Processamento

    area = base*altura;


//Saída de Informações

    printf("A área do retangulo é de %.1f",area);


	return 0;
}