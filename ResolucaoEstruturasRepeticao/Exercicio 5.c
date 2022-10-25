#include <stdio.h>

int main(void) {
  
  float maior=0, menor=0, media=0, soma=0, altura=0;
  int flag=1, cont=0;
  
  do{

    printf("Digite a altura do paciente\n");
    scanf("%f",&altura);

    if(menor==0 && maior==0){
      maior=altura;
      menor=altura;
    }else{
      if(altura<menor){
        menor = altura;
      }
      if(altura>maior){
        maior = altura;
      }
    }

    cont++;

    soma = soma + altura;
    media = soma / cont;    

    printf("Deseja inserir outra altura? 0-->NÃO 1-->SIM\n");
    scanf("%d",&flag);

  }while(flag==1);

  printf("Total de inserções: %d\n",cont);
  printf("Média de alturas: %.2f\n",media);
  printf("Menor altura: %.2f\n",menor);
  printf("Maior de altura: %.2f\n",maior);
  return 0;
}