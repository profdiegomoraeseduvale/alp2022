#include <stdio.h>

int main(){


//Declaração de Variáveis
	float n1, n2, resultado;
    int opt;


//Entrada de Dados
    printf("Digite a opção desejada: \n");
    printf("1 - Somar: \n");
    printf("2 - Subtrair: \n");
    printf("3 - Multiplicar: \n");
    printf("4 - Dividir: \n");
    scanf("%d",&opt);

    printf("Digite o primeiro valor: \n");
    scanf("%f",&n1);

    printf("Digite o segundo valor: \n");
    scanf("%f",&n2);

//Processamento

    switch(opt){

       case 1: resultado = (n1+n2); break;
       case 2: resultado = (n1-n2); break;
       case 3: resultado = (n1*n2); break;
       case 4: resultado = (n1/n2); break;
       default: printf("Opção não encontrada \n");

    }


//Saída

    printf("O resultado é: %.1f ",resultado);
 

    return 0;


}