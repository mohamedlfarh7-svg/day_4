#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille,i,element;
    printf("entrer taille  de tableau :");
    scanf("%d",&taille);
    int T[taille];
    printf("entrer les element de tableau :\n");
    for(i=0;i<taille;i++){
        printf("entrer le element %d :",i+1);
        scanf("%d",&T[i]);
    }
    printf("entrer la valeur de element :");
    scanf("%d",&element);
    int x=0;
    for(i=0;i<taille;i++){
        if(element==T[i]){
            x=x+1;
            break;
        }
    }
    if(x==0)
        printf("le element ne trouve pas dans le tableau ");
    else
         printf("le element est se trouve  dans le tableau ");
    return 0;
}
