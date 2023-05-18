#include <stdio.h>
#include <stdlib.h>

void bubblesort(int v[200], int n)
{
    int i, j, aux;
    
    for (i = n-1; i > 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            if(v[j] > v[j+1])
            {
                //troca
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
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
    
    bubblesort(v, n);
    printf("\n\nVetor ordenado:\n");
    for(i = 0; i < n; i++)
    {
        printf("%i ", v[i]);
    }
    
    printf("\n");
    return 0;
}
