#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,resultado;

    printf("---- PROGRAMA QUE CALCULA O FATORIAL DE UM NUMERO ----\n");
    printf("Digite um numero >= 0: ");
    scanf("%d",&n);

    resultado = n;

    while(n > 1){
        resultado = resultado * (n-1);
        n--;
    }

    printf("resultado: %d",resultado);

    return 0;
}
