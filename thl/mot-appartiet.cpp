#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define NbrEtats 4

typedef int ensemble[NbrEtats];

ensemble Trans[NbrEtats]['z' - 'a' + 1][NbrEtats] = {
    {{1, 2, 0, 0}, {0}, {0}, {0}}, // Trans[q0, 'a'] = {1, 2}
    {{1, 3, 0, 0}, {1, 1, 3, 0}, {0}, {0}}, // Trans[q1, 'b'] = {1, 3}
    {{1, 3, 0, 0}, {0}, {1, 3, 0, 0}, {0}}, // Trans[q2, 'c'] = {1, 3}
    {{0}, {2, 0, 0, 0}, {0}, {0}} // Trans[q3, 'b'] = {2}
};

int F[NbrEtats] = {1, 3, 0, 0};

bool reconnaitRec(char Ch[], int k, int q) {
    if (k >= strlen(Ch)) {
        return F[q] != 0;
    } else {
        char c = Ch[k];
        int st = 0;
        bool arret = false;
        bool bl = false;
        while (st < NbrEtats && !arret) {
            if (Trans[q][c - 'a'][st] != 0) {
                if (reconnaitRec(Ch, k + 1, Trans[q][c - 'a'][st])) {
                    bl = true;
                    arret = true;
                }
            }
            st++;
        }
        if (!arret) {
            bl = false;
        }
        return bl;
    }
}

int main() {
    char Ch[] = "aabbbc";
    int k = 0;
    int q = 0;

    bool resultat = reconnaitRec(Ch, k, q);

    if (resultat) {
        printf("La chaîne est acceptée par l'automate.\n");
    } else {
        printf("La chaîne n'est pas acceptée par l'automate.\n");
    }

    return 0;
}

