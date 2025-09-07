#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Entrez le nombre d'elements de le tableau : ");
    scanf("%d", &n);
    int TE[n],TS[n];
    printf("Entrez les elements du tableau : \n");
    for ( i = 0; i< n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &TE[i]);
    }
    for(i = 0; i< n; i++){
        TS[n-1-i]=TE[i];
    }
    printf("le tableux inverse :\n");
    for(i = 0; i< n; i++){
         printf("TS[%d] = %d\n",i+1,TS[i]);
    }
    return 0;
}
