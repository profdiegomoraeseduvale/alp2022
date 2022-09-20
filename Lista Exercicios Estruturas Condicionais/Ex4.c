#include <stdio.h>

int main(){


//Declaração de Variáveis
	 
  int idade, categoria;


//Entrada de Dados
    printf("Digite a idade: \n");
    scanf("%d",&idade);

    printf("Digite a categoria (0-> Não-Sócio | 1-> Sócio): \n");
    scanf("%d",&categoria);
    
//Processamento e Saída
    if(idade>=60 || categoria==1){

      printf("Desconto concedido");

    }else{

      printf("Desconto não concedido");

    }

 return 0;
 
}