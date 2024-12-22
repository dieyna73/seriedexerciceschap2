#include <stdio.h>
int est_bissextile(int annee) {
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        return 1;
    }
    return 0;
}
int date_valide(int jour, int mois, int annee) {
    if (mois < 1 || mois > 12) {
        return 0;
    }
    int jours_max;
    switch(mois) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            jours_max = 31;
            break;
        case 4: case 6: case 9: case 11:
            jours_max = 30;
            break;
        case 2:
            if (est_bissextile(annee)) {
                jours_max = 29;
            } else {
                jours_max = 28;
            }
            break;
    }
    if (jour < 1 || jour > jours_max) {
        return 0;
    }

    return 1;
}

int main() {
    int jour, mois, annee;
    printf("Entrez le jour (1-31): ");
    scanf("%d", &jour);
    printf("Entrez le mois (1-12): ");
    scanf("%d", &mois);
    printf("Entrez l'année: ");
    scanf("%d", &annee);
    if (date_valide(jour, mois, annee)) {
        printf("La date %02d/%02d/%d est valide.\n", jour, mois, annee);
    } else {
        printf("La date %02d/%02d/%d n'est pas valide.\n", jour, mois, annee);
    }

    return 0;
}

