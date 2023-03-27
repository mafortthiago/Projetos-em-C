#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a;

    printf("Digite o elemento que se quer descobrir na sequencia de fibonacci: ");
    scanf("%d",&a);
    int n[a];

    n[0] = 0;
    n[1] = 1;

    for(i=2; i< a; i++){
        n[i] = n[i-2] + n[i-1];
    }
    printf("Valor do elemento de numero %d: %d. ",a,n[a-1]);
    return 0;
}


