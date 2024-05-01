#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20

char M[N] = "", symb_cour;
int i, n, accepte, stop;

void A(); // Déclaration de la fonction A

void S() {
    if (symb_cour == 'a') {
        if (i < n) {
            symb_cour = M[i++];
            A(); // Appel de la fonction A
        } else
            accepte = 0; // FAUX
    } else
        accepte = 0; // FAUX
}

void A() {
    if (symb_cour == 'b' || symb_cour == 'c') {
        if (i < n) {
            symb_cour = M[i++];
            A(); // Appel récursif de la fonction A
        } else
            accepte = 0; // faux
    } else if (symb_cour == 'd') {
        if (i == n)
            accepte = 1; //vrai
        else
            accepte = 0; //faux
    } else
        accepte = 0; 
}

int main() {
    do {
        printf("\n");
        printf("Donner un mot a� tester (/ pour terminer) : ");
        scanf("%s", M);
        stop = strcmp(M, "/");
        if (stop != 0) {
            n = strlen(M);
            i = 0;
            symb_cour = M[i++];
            S();
            if (accepte)
                printf("Le mot appartient au langage\n");
            else
                printf("Le mot n'appartient pas au langage\n");
        }
    } while (stop != 0);
    return 0;
}
