#include <stdio.h>


int main(){

//Declaração de Variáveis
 int opt;
 float altura, peso;

//Entrada de Dados do Sistema
 printf("Informe a altura: \n");
 scanf("%f",&altura);

 printf("Informe o gênero (1--> Feminino | 2--> Masculino): \n");
 scanf("%d",&opt);

//Processamento e Saída de Informações
 switch(opt){

   case 1 : peso = 62.1*altura-44.7;break;
   case 2 : peso = 72.7*altura-58; break;
   default :  printf("Opção Inválida");

 }

 printf("O peso ideal é de %.2f ",peso);
 
return 0;

}