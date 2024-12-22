
#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
    printf("Merci de saisir un nombre entier\n");
    scanf("%d",&x);
    switch(x){
    case 0:
        printf("le nombre %d est nul\n",x);
    break;
    case 1:
        printf("le nombre %d est petit\n",x);
    break;
    case 2:
        printf("le nombre %d est petit\n",x);
    break;
    case 3:
        printf("le nombre %d est moyen\n",x);
    break;
    case 4:
        printf("le nombre %d est grand\n",x);
    break;
    case 5:
        printf("le nombre %d est grand\n",x);
    break;
    default :
        printf("le nombre %d est hors norme\n",x);
    }

    return 0;

}
