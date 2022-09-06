#include <stdio.h>

int main()
{
	

    float num1, num2, resultado;

    printf("Digite o primeiro número ");
    scanf("%f", &num1);

    printf("Digite o segundo número ");
    scanf("%f", &num2);

    resultado = num1/num2;

    printf("O resultado é %.2f",resultado);
    return 0;
	
}