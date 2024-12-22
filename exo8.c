#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,delta,x,y,z;
printf("Merci de saisir a ");
scanf("%f",&a);
printf("Merci de saisir b ");
scanf("%f",&b);
printf("Merci de saisir c ");
scanf("%f",&c);
 delta=(b*b)-(4*a*c);
 if(delta<0){
    printf("l'equation n'a pas de solution");
 }
 else if (delta==0){
    x=-b/(2*a);
    printf("Cet équation a une unique solution x = %f\n", x);
 }
 else if(delta>0){
    y=(-b - sqrt(delta))/(2*a);
    z=(-b + sqrt(delta))/(2*a);
    printf("Cette équation a deux solutuions y = %f et z = %f\n",y,z);
    return 0;
 }

}
