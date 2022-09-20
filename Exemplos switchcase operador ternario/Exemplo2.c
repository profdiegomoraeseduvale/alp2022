#include <stdio.h>

int main(){

 char opt;


 printf("Informe a opção desejada: ");
 scanf("%c",&opt);

 switch(opt){

   case 'a': printf("\nRecursos Humanos"); break;
   case 'b': printf("\nFinanças"); break;
   case 'c': printf("\nDiretoria"); break;
   case 'd': printf("\nCoordenação"); break;
   default printf("Opção não encontrada");


 }

 return 0;
 
}