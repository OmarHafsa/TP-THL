
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
#define NMots 200;
char M[N]="";
int i, nm, NmMots = NMots;
void S(char M[]) { 
char M1[N]="";
int n,r;
n = strlen(M);
r = rand()%2;
strcpy(M1,M); // on recopie M dans M1
switch (r) {
case 0 : // application de la 1�re r�gle S ? aS :
M1[n] = 'a'; // on concat�ne M1 avec 'a'
M1[n+1] = '\0';
S(M1); // appel de S
break;
case 1 : // application de la 2i�me r�gle S ? b :
if (i<nm) {
M1[n] = 'b'; // on concat�ne M1 avec 'b'
M1[n+1] = '\0';

printf(" %s \n",M1); // affichage du mot form�

}
break;
}
} // Fin de la fonction S
main ()
{
do {
printf(" nombre de mots a generer : ");
scanf("%d",&nm);
} while ((nm<1)||(nm>NmMots));
printf("mots du langage : \n");
i = 0;
while (i<nm) {
strcpy(M,"");
S(M);
i++;
}
printf("\n");
}
