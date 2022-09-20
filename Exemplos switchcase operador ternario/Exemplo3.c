#include <stdio.h>

int main(){

  float n1, n2, media;

  printf("Digite o valor da primeira nota: ");
  scanf("%f",&n1);

  printf("Digite o valor da segunda nota: ");
  scanf("%f",&n2);

  media = (n1+n2)/2;

  printf("A média é %.2f",media);

  printf(media>7?"\nAprovado":"\nReprovado");
 
  return 0;

}