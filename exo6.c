#include <stdio.h>
int main(){
int x,y,z;
printf("Merci de saisir x ");
scanf("%d",&x);
printf("Merci de saisir y ");
scanf("%d",&y);
printf("Merci de saisir z ");
scanf("%d",&z);
if((x>y) && (x>z) && (y>z)){
    printf("%d est la valeur maximale, %d est la valeur moyenne et %d est la valeur minimale",x,y,z);
}
if ((x>y) && (x>z) && (z>y)){
    printf("%d est la valeur maximale, %d est la valeur moyenne et %d est la valeur minimale",x,z,y);
}
if ((y>x) && (y>z) && (x>z)){
    printf("%d est la valeur maximale, %d est la valeur moyenne et %d est la valeur minimale",y,x,z);
}
if((y>x) && (y>z) && (z>x)){
    printf("%d est la valeur maximale, %d est la valeur moyenne et %d est la valeur minimale",y,z,x);
}
if((z>y) && (z>x) && (x>y)){
    printf("%d est la valeur maximale, %d est la valeur moyenne et %d est la valeur minimale",z,x,y);
}
if ((z>y) && (z>x) && (y>x)){
    printf("%d est la valeur maximale, %d est la valeur moyenne et %d est la valeur minimale",z,y,x);
}
return(0);
}
