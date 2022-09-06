#include <stdio.h>


int main()
{
	//Declaração das variáveis
	float nota1, nota2, nota3, media;
	char nome[80];

	//Entrada de Dados

    printf("Digite o nome do aluno: \n");
	scanf("%s",&nome);

	printf("Digite a primeira nota: \n");
	scanf("%f",&nota1);

	printf("Digite a segunda nota: \n");
	scanf("%f",&nota2);

	printf("Digite a terceira nota: \n");
	scanf("%f",&nota3);

	//Processamento

	media = (nota1+nota2+nota3)/3;

	//Saída das informações

	printf("O nome do aluno é %s e a média final é de %.1f",nome,media);

    return 0;
	
}