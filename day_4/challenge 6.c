#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("entrer un nombre :");
    scanf("%d",&n);
    int factoriel=1;
    i=1;
    while(i<=n){
        factoriel*=i;
        i++;


    }
     printf("%d",factoriel);
    return 0;
}
