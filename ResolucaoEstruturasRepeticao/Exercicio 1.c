#include <stdio.h>


int main()
{
    
    float peso = 0.0, media=0.0, total=0.0;
    int contador = 1;
    int controle=1;

    while(controle!=0){

        printf("Digite o peso do caminhão %d:\n",contador);
        scanf("%f",&peso);

        total=total+peso;
        media = total/contador;
       
        
        printf("Deseja registrar o peso do caminhão %d? 0-->NÃO 1-->SIM\n", contador);
        scanf("%d",&controle);
        
        if(controle==1){
          contador++;
        }

    }

    printf("Total de pesagens: %d\n",contador);
    printf("Média de peso: %.1f\n",media);



    return 0;
}