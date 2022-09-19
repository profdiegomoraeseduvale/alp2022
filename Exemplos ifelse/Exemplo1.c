#include <stdio.h>

int main(){

  float n1, n2, media;

  printf("Digite o valor da primeira nota: ");
  scanf("%f",&n1);

  printf("Digite o valor da segunda nota: ");
  scanf("%f",&n2);

  media = (n1+n2)/2;

  printf("A média é: %3.2f",media);

  if(media>7){

  	printf("\nAprovado");

  }else{
    
    printf("\nReprovado");

  }

  return 0;

}