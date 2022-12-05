#include <stdio.h>

int main(){


  int vet[8];
  int x;
  int controle = 0;


  for (int i = 0; i < 8; i++)
  {
    printf("Digite o valor %d\n",i);
    scanf("%d",&vet[i]);
  }

    printf("Digite o valor para pesquisa\n");
    scanf("%d",&x);

    for (int i = 0; i < 8; i++)
    {
      if(vet[i]==x){

        printf("Valor encontrado na posição %d\n",i);
        controle = 1;

      }

      
      }

         if(controle==0){

         printf("Valor não encontrado\n");

    }
   
   return 0;

}