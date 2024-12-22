
#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
    printf("Merci de saisir un nombre entier\n");
    scanf("%d",&x);
    if(x==0){
        printf("le nombre %d est nul\n");}
    else if((x==1) || (x==2)){
            printf("le nombre %d est petit",x);
       }
    else if(x==3){
        printf("le nombre %d est moyen\n",x);
    }

     else if((x==4) || (x==5)){
        printf("le nombre %d est grand\n",x);
    }
     else if(x>5){
        printf("le nombre %d est hors norme\n",x);
    }

    return 0;

}
