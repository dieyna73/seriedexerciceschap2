#include <stdio.h>
int main() {
    int mois, annee;
    printf("Merci de donner l'incide du mois (1-12 )");
    scanf("%d",&mois);
    printf("Merci de préciser l'année ");
    scanf("%d",&annee);
    switch(mois){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Ce mois a 31 jours.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Ce mois a 30 jours.\n");
            break;
        case 2:
            if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
                printf("Ce mois a 29 jours (année bissextile).\n");
            } else {
                printf("Ce mois a 28 jours.\n");
            }
            break;
        default:
            printf("Mois invalide !\n");
    }

    return 0;
}
