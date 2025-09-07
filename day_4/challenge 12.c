#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,taille;
    printf("entrer la taille de tableau :");
    scanf("%d",&taille);
    int T[taille];
    printf(" les element de tableau :\n");
    for(i=1;i<=taille;i++){
        printf("T[%d]:",i);
        scanf("%d",&T[i]);
    }
     printf("les element pair dans le tableau :\n");
     for(i=1;i<=taille;i++){
            if(T[i]%2==0)
                printf("%d\n",T[i]);
     }
    return 0;
}
