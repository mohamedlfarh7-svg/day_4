#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n, i;


    printf("Entrez le nombre d'elements de le tableau : ");
    scanf("%d", &n);
    int T[n];

    printf("Entrez ses elements : \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("Les elements du tableau sont : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }

    return 0;
}
