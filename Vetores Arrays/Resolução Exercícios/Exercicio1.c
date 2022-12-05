#include <stdio.h>

int main(){


  int vet[6];
  int x,y,soma;

  for (int i = 0; i < 6; i++)
  {
  	printf("Digite o valor %d\n",i);
  	scanf("%d",&vet[i]);
  }

    printf("Digite o valor de X\n");
  	scanf("%d",&x);

  	printf("Digite o valor de Y\n");
  	scanf("%d",&y);

    soma = vet[x] + vet[y];

    printf("O valor da soma é %d\n",soma);

  return 0;
}
