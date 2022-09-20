#include <stdio.h>

int main(){


//Declaração de Variáveis
	int n1, n2, n3;


//Entrada de Dados
    printf("Digite o primeiro valor: \n");
    scanf("%d",&n1);

    printf("Digite o segundo valor: \n");
    scanf("%d",&n2);

    printf("Digite o terceiro valor: \n");
    scanf("%d",&n3);


//Processamento e Saída
    
    if(n1<n2 && n1<n3){

        printf("O menor valor é: %d",n1);

    }else{

        if(n2<n1 && n2<n3){

            printf("O menor valor é: %d",n2);

        }else{

            printf("O menor valor é: %d",n3);

        }

    }

    return 0;

}