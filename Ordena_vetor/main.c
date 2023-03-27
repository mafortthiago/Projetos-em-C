#include <stdio.h>
#include <stdlib.h>

int ordenaVetor(int vet[],int n){
    int i, j, aux;

    for(i=0; i < n; i++){
        for(j = 0; j < n-1-i; j++){
            if(vet[j] > vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j+1] = aux;
            }
        }
    }
}
int preecheVetor(int vetor[],int n){
    int i;

    for(i=0; i<n; i++){
        printf("Digite o numero para a posicao %d do vetor: ",i);
        scanf("%d",&vetor[i]);
    }
}
int main()
{
    int i,n;
    printf("----- PROGRAMA QUE ORDENA UM VETOR -----\n");

    printf("Digite o tamanho desejado de vetor: ");
    scanf("%d",&n);

    int vetor[n];

    preecheVetor(vetor,n);

    printf("\nVetor antes de ser ordenado:\n");
    for(i =0; i< n; i++){
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }

    ordenaVetor(vetor,n);

    printf("\nVetor ordenado:\n");
    for(i =0; i< n; i++){
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }
    return 0;
}
