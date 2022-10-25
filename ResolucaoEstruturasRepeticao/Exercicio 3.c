#include <stdio.h>


int main() {
  
  int num, fat=1;

  printf("Digite um número inteiro:");
  scanf("%d",&num);
  
  printf("Fatorial = ");

  for(int i=num; i>0;i--){
    fat = fat*i;

    if(i>1){
      printf("%d x ",i);
    }else{
      printf("%d",i);
    }
    
  }

  printf(" = %d",fat);

  return 0;
}