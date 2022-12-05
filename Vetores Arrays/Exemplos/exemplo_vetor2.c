#include <stdio.h>

int main(){

int vet[5];


for (int i = 0; i < 5; ++i)
{
	printf("Digite o número %d \n",i);
	scanf("%d", &vet[i]);
}


for (int i = 0; i < 5; ++i)
{
	printf("%d \n",vet[i]);;
}
return 0;
}