#include <stdio.h>

int main() {
    
int n1,n2,n3;

printf("Digite o primeiro valor: ");
scanf("%d",&n1);

printf("Digite o segundo valor: ");
scanf("%d",&n2);

printf("Digite o terceiro valor: ");
scanf("%d",&n3);

if(n1<n2 && n1<n3){
    
    if(n2<n3){
        printf("%d,%d,%d",n1,n2,n3);
    }else{
        printf("%d,%d,%d",n1,n3,n2);
    }
    
}

if(n2<n1 && n2<n3){
    
    if(n1<n3){
        printf("%d,%d,%d",n2,n1,n3);
    }else{
        printf("%d,%d,%d",n2,n3,n1);
    }
}

if(n3<n1 && n3<n2){
    
    if(n2<n1){
        printf("%d,%d,%d",n3,n2,n1);
    }else{
        printf("%d,%d,%d",n3,n1,n2);
    }
}

    return 0;
}