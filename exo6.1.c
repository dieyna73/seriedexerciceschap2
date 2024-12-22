#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void main()
{
    int x,y,z,max,moy,min;
    printf("Merci de saisir un entier \n");
    scanf("%d %d %d", &x,&y,&z);
    if(x<y)
        {
        max=y;
        min=x;
        }
    else
    {

        max=x;
        min=y;
    }

    if(z>max)
    {
        moy=max;
        max=z;
    }

    else
    {
        if(z>min)
        moy=z;
        else
        {
            moy=min;
            min=z;
        }
    }
    printf("%d est la valeur maximale, %d est la valeur moyenne et %d est la valeur minimale",max,moy,min);
}
