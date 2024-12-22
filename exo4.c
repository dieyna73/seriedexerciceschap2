#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Merci de saisir un nombre entier\n");
    scanf("%d",&x);
    printf("Merci de saisir un nombre entier\n");
    scanf("%d",&y);

    if((x>0 && y>0) || (x<0 && y<0)){
        printf("leur produit est positif");
    }
    else if((x<0 || y>0)){

      printf("leur produit est négatif");

    }
    else if(x>0 || y<0){

      printf("leur produit est négatif");}


    return 0;
}
