#include <stdio.h>

int main(){


//Declaração de Variáveis
	float nota1, nota2, nota3, media;


//Entrada de Dados
    printf("Digite o valor da primeira nota: \n");
    scanf("%f",&nota1);

    printf("Digite o valor da segunda nota: \n");
    scanf("%f",&nota2);

    printf("Digite o valor da terceira nota: \n");
    scanf("%f",&nota3);


//Processamento e Saída
    media = (nota1+nota2+nota3)/3;
    printf("Média: %.1f \n", media);

    if(media>=7){
    	
    	printf(" Situação: Aprovado");

    }else{

        if(media<4){
           
    	   printf(" Situação: Reprovado");

        }else{
          
           printf(" Situação: Exame"); 
           
        }

    }

    return 0;


}