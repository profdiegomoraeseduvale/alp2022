#include <stdio.h>

int main(){

 int opt;


 printf("Informe a opção desejada: ");
 scanf("%d",&opt);

 switch(opt){

   case 1: printf("\nRecursos Humanos"); break;
   case 2: printf("\nFinanças"); break;
   case 3: printf("\nDiretoria"); break;
   case 4: printf("\nCoordenação"); break;
   default printf("Opção não encontrada");


 }

 return 0;
 
}