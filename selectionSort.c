#include <stdio.h>
#include <stdlib.h>

void selectionSort (int v[200], int n)
{
    int i, j, aux, min;
    
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(v[j] < v[min])
            {
                min = j;
            }
        }
        
        aux = v[i]; v[i] = v[min]; v[min] = aux; //troca
    }
}

int main()
{
    int v[200], n, i;
    printf("Digite o tamanho desejado do vetor:\n");
    scanf("%i", &n);
    
    printf("Digite os %i elementos do vetor:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%i", &v[i]);
    }
    
    selectionSort(v, n);
    printf("\n\nVetor ordenado:\n");
    for(i = 0; i < n; i++)
    {
        printf("%i ", v[i]);
    }
    
    printf("\n");
    return 0;
}
