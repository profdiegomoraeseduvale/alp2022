#include <stdio.h>

int main(){


  int vet[6];
  int cont = 0;


  for (int i = 0; i < 6; i++)
  {
    printf("Digite o valor %d\n",i);
    scanf("%d",&vet[i]);
  }


  for (int i = 0; i < 6; i++)
  {
    if(vet[i]%2==0){

      cont++;

    }
  }

  printf("A quantidade de números pares é:%d \n",cont);

  return 0;


}