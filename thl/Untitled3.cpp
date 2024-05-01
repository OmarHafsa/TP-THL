#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
#define NbrEtats 4
struct etats{
	int etat[4];
};
etats Trans[NbrEtats]['z' - 'a' + 1][NbrEtats] = {
    {{1, 2, 0, 0}, {0}, {0}},
    {{0, 1, 3, 0}, {1, 1, 3, 0}, {0}, {0}},
    {{1, 3, 0, 0}, {0}, {1, 3, 0, 0}, {0}},
    {{0}, {2, 0, 0, 0}, {0}, {0}} 
};
int F[NbrEtats] = {1, 3};
bool reconnaitRec(char ch[],int k, int q){
	bool b1,arret;
 	int st;
 	char c = ch[k];
    st= 0;
	arret = false;
   if (k>=strlen(ch)){
   	 return (q =F[0] || q =F[1]);
   }else{
   	while(st<NbrEtats && !arret){
   		if (Trans[q,c]==st) {	   
			if (reconnaitRec(Ch,k+1,st) ){
				bl = true;
				arret = true;
			}
		}
		st++;
   }
   if(!arret){
   	bl=false;
   }
   reconnaitRec =b1;
}
}
int main() {
    char Ch[]; 
    int k = 0; 
    int q = 0;
    printf("enter la chaine:");
    scanf("%s",&ch);
    bool resultat = reconnaitRec(Ch, k, q);
if (resultat)
        printf("La chaîne est acceptée par l'automate.\n");
    else
        printf("La chaîne n'est pas acceptée par l'automate.\n");

    return 0;
}

