#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n, somme = 0;

    printf("Entrez le nombre d'elements de le tableau : ");
    scanf("%d", &n);

    int T[n];

    printf("Entrez ses elements : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &T[i]);
        somme += T[i];
    }

    printf("La somme totale est : %d", somme);
    return 0;
}
