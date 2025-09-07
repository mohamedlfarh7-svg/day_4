#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;

    printf("Entrez le nombre d'elements de le tableau : ");
    scanf("%d", &n);

    int original[n], copy[n];

    printf("Entrez les elements du tableau : \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &original[i]);
    }

    for (i = 0; i < n; i++)
    {
        copy[i] = original[i];
    }

    printf("Tableau original : \n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", original[i]);
    }
    printf("\n");

    printf("Tableau copy : \n");

    for ( i = 0; i< n; i++)
    {
        printf("%d ", copy[i]);
    }
    return 0;
}
