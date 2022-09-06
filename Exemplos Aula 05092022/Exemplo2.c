#include <stdio.h>

int main()
{
    char nome[50];
    
    printf("Digite um nome:\n");
    scanf("%[^\n]", nome);
    
    printf("O nome é %s", nome);
    
    return 0;
}