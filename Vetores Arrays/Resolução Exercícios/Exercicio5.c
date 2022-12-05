#include <stdio.h>

int main(){


  int vet[5];
  


  for (int i = 1; i <= 5; i++)
  {

    printf("Digite o número %d\n",i);
    scanf("%d",&vet[i]);
   
  }



  for (int i = 5; i >= 1; i--)
  {

    printf("%d",vet[i]);
       
  }

  return 0;

}