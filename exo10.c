#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere;
    printf("Veuillez entrer un caract�re : ");
    scanf("%c", &caractere);
    if (isalpha(caractere)) {
        if (isupper(caractere)) {
            printf("Le caract�re '%c' est une lettre majuscule.\n", caractere);
        } else {
            printf("Le caract�re '%c' est une lettre minuscule.\n", caractere);
        }
    }
    else if (isdigit(caractere)) {
        printf("Le caract�re '%c' est un chiffre.\n", caractere);
    }
    else {
        printf("Le caract�re '%c' est un caract�re sp�cial.\n", caractere);
    }

    return 0;
}
