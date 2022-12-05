#include <stdio.h>

int main(){


  float vet[4];
  float media;
  float total = 0;


  for (int i = 0; i < 4; i++)
  {
    printf("Digite a temperatura %d\n",i);
    scanf("%f",&vet[i]);

    total = total + vet[i];

  }

  media = total / 4;

  printf("A temperatura média é de %.2f\n",media);

  return 0;

}