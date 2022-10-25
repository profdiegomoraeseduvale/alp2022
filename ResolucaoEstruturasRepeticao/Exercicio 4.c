#include <stdio.h>

int main() {
  
  int continterno=0, contexterno=0;

  for(int i=1; i<=20; i++){
     for(int j=1; j<=20;j++){
       if(i%j==0){
         continterno++;
       }       
     }
     
     if(continterno==2){
       contexterno++;
     }

     continterno=0;

  }

  printf("A quantidade de números primos é %d",contexterno);


  return 0;
}