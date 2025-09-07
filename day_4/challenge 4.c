#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  max,i, n;

    printf("Entrez le nombre d'elements de le tableau : ");
    scanf("%d", &n);

    int T[n];

    printf("Entrez ses elements : \n");

    for (i=0; i<n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &T[i]);

    }
    max = T[0];
     for (i=1; i<n; i++){
            if (T[i] > max){
                max = T[i];
            }
     }
    printf("Le maximum est %d\n", max);
    return 0;
}
