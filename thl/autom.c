#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NbrEtats 4
#define NbrAlphabet 2
#define Nmax 80 // longueur max de la chaine d'entrée
int lettre2int (char c){
 int R;
 switch (c) {
 case '0' : R = 0;
 break;
 case '1' : R = 1;
 break;
 default : R = -1;
 }
 return R;
}

main()
{ int Trans[NbrEtats][NbrAlphabet], estfinal[NbrEtats], n, i, s, bl, 
stop;
 char M[Nmax], car;
 // table de transition de l’AFD : 
 Trans[0][lettre2int('0')] = -1; Trans[0][lettre2int('1')] = 1;
 Trans[1][lettre2int('0')] = 2; Trans[1][lettre2int('1')] = 1;
 Trans[2][lettre2int('0')] = 2; Trans[2][lettre2int('1')] = 3;
 Trans[3][lettre2int('0')] = -1; Trans[3][lettre2int('1')] = 1;
 estfinal[0] = 0;
 estfinal[1] = estfinal[2] = estfinal[3] = 1;
 do {
 printf("\n");
 printf("donner un mot à tester (/ pour terminer) : ");
 scanf("%s",&M);
 stop = strcmp(M,"/");
 if (stop!=0) {
 n = strlen(M);
 s = 0; // s reçoit l'etat initial 0
 bl = 1; // VRAI
 i = 0 ; /* indice du 1er caractère du mot à analyser */
 while ((i<n) && bl) {
 car = M[i++] ;
 if (!((car=='0')||(car=='1')))
 bl = 0; //FAUX
 else {
 s = Trans[s][lettre2int(car)] ; /* état suivant */
 if (s==-1) bl = 0; //FAUX
 }
 }
 if (bl && estfinal[s])
 printf(" la chaine est acceptée\n");
 else
 printf("la chane n’est pas acceptée\n");
 }
 } while (stop!=0);
}
