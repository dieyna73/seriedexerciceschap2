#include <stdio.h>

int main() {

int mois, annee, jours;
    printf("Merci de donner l'incide du mois (1-12 )");
    scanf("%d",&mois);
    printf("Merci de préciser l'année ");
    scanf("%d",&annee);
    if(mois==1 || mois==3 || mois==5 || mois==7  || mois==8 || mois==10 || mois==12 ){
            jours=31;
    }
    else if(mois==4 || mois==6  || mois==9  || mois==11 ){
        jours=30;
    }
    else if(mois=2){
        if((annee % 4==0) && (annee % 100!=0)){
            jours=29;
        }
        else{
            jours=28;
        }
    } else {
        printf("Mois invalide !\n");}
 printf("Le mois %d de l'année %d a %d jours.\n",mois,annee,jours);

}
