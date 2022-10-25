#include <stdio.h>

int main() {
  
  int senhabd = 1234, senha, cont=1, flag;

  do{

    printf("Digite a senha: \n");
    scanf("%d",&senha);

    if(senha==senhabd){
      printf("Acesso Liberado!");
      flag=1;
    }else{
      printf("Senha Incorreta! Tentativa: %d\n", cont);
      cont++;
      if(cont>3){
        flag=1;
      }
    }

  }while(flag!=1);

  if(cont>3){
    printf("Acesso bloqueado!");
  }

 return 0;
}