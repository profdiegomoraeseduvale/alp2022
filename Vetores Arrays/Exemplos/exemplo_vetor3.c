#include <stdio.h>

int main(){

int vet[5];

int x, y, soma;


for (int i = 0; i < 5; ++i)
{
	printf("Digite o nC:mero %d \n",i);
	scanf("%d", &vet[i]);
}

printf("Digite uma posicao no vetor \n");
scanf("%d",&x);

printf("Digite outra posicao no vetor \n");
scanf("%d",&y);


soma = vet[x] + vet[y];


printf("A soma é %d \n ",soma);

return 0;


}