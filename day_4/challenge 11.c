#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50],element;
    int i,taille;
    printf("entrer la taille de tableau :");
    scanf("%d",&taille);
    printf("entrer les element de tableau :\n");
    for(i=0;i<taille;i++){
        printf("T[%d]:",i+1);
        scanf("%d",&T[i]);
    }
    int position;

    do{
        printf("entrer la position de element qui doit suprimer :");
        scanf("%d",&position);

    }while(position<=0 || position>taille);

    for(i=position;i<taille;i++){
       T[i-1]=T[i];
    }
    taille--;
    printf("ecrire element qui doit inserer :");
    scanf("%d",&element);

    do{
        printf("entrer la position de element qui doit inserer :");
        scanf("%d",&position);

    }while(position<=0 || position>taille+1);
    for(i=taille;i>=position;i--){
      T[i]=T[i-1];
    }
    T[position-1]=element;
    taille++;
    printf("les elements apres remplacement :\n ");
    for(i=0;i<taille;i++)
        printf("T[%d]=%d\n",i+1,T[i]);



    return 0;
}
