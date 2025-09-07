#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  min,i, n;

    printf("Entrez le nombre d'elements de le tableau : ");
    scanf("%d", &n);

    int T[n];

    printf("Entrez ses elements : \n");

    for (i=0; i<n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &T[i]);

    }
    min = T[0];
     for (i=1; i<n; i++){
            if (T[i] < min){
                min = T[i];
            }
     }
    printf("Le minimum est %d\n", min);

    return 0;
}
