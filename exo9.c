#include <stdio.h>
#include <ctype.h>

int main() {
    char lettre;
    printf("Veuillez entrer une lettre : ");
    scanf("%c", &lettre);
    if ((lettre >= 'a' && lettre <= 'z') || (lettre >= 'A' && lettre <= 'Z')) {
        if (isupper(lettre)) {
            lettre = tolower(lettre);
        } else {
            lettre = toupper(lettre);
        }
        printf("La lettre après inversion de la casse est : %c\n", lettre);
    } else {
        printf("Erreur : vous devez entrer une lettre alphabétique.\n");
    }

    return 0;
}
