#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere;
    printf("Veuillez entrer un caractère : ");
    scanf("%c", &caractere);
    if (isalpha(caractere)) {
        if (isupper(caractere)) {
            printf("Le caractère '%c' est une lettre majuscule.\n", caractere);
        } else {
            printf("Le caractère '%c' est une lettre minuscule.\n", caractere);
        }
    }
    else if (isdigit(caractere)) {
        printf("Le caractère '%c' est un chiffre.\n", caractere);
    }
    else {
        printf("Le caractère '%c' est un caractère spécial.\n", caractere);
    }

    return 0;
}
