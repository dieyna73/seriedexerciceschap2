#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;
    printf("Merci de saisir un nombre\n");
    scanf("%d",&nbr);

    if(nbr>0){
        printf("le nombre saisi est positif");
    }
    else if(nbr<0){

      printf("le nombre saisi est négatif");

    }

    return 0;
}

