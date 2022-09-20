#include <stdio.h>


int main(){

//Declaração de Variáveis
 int opt;
 float velocidade;

//Entrada de Dados
 printf("Informe a velocidade do veículo: \n");
 scanf("%f",&velocidade);

 printf("Informe o tipo do veículo (1--> Leve | 2--> Pesado): \n");
 scanf("%d",&opt);

//Processamento e Saída de Informações
 switch(opt){

   case 1 : if(velocidade>120){

   	          printf("Veículo Multado \n");
   	          }else{
                	printf("Veículo Não Multado \n");
   	          }break;

   case 2 : if(velocidade>90){

              printf("Veículo Multado \n");
              }else{
                 printf("Veículo Não Multado \n");
              }break;

              default : printf("Veículo Inválido");

  }
 
  return 0;

}