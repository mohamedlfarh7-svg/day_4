#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n,i,j,k,order;

    printf("Entrez le nombre d'elements de le tableau : ");
    scanf("%d", &n);
    int T[n];
    printf("Entrez ses elements : \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &T[i]);
    }

    for (j = 0; j < n-1; j++)
    {
        for (k = 0; k < n-1; k++)
        {
            if (T[k] > T[k+1])
            {
                order = T[k+1];
                T[k+1] = T[k];
                T[k] = order;
            }
        }
    }
    printf("Tableau trie en ordre croissant : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }
    return 0;
}
