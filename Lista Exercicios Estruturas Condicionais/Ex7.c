#include <stdio.h>


int main(){

//Declaração de Variáveis
float salarioatual, salarionovo;

//Entrada de Dados
printf("Informe o salário atual: \n");
scanf("%f",&salarioatual);


//Processamento
if(salarioatual<=750){

  salarionovo = salarioatual + (salarioatual*0.05) + 100;

}else{

  salarionovo = salarioatual + (salarioatual*0.05);

}


//Saída de informações
printf("O salário reajustado é de R$%.2f:",salarionovo);


 return 0;


}