#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille,i;
    printf("entrer la taille de tableau :");
    scanf("%d",&taille);
    int T[taille],somme;
    float moyenne;
    for(i=1;i<=taille;i++){
        printf("element %d:",i);
        scanf("%d",&T[i]);
    }
    moyenne=0;
    somme=0;
    for(i=1;i<=taille;i++){
            somme+=T[i];
    }
    moyenne=somme/taille;
    printf("la moyenne des element de tableau : %.2f",moyenne);
    return 0;
}
