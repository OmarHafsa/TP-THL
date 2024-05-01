#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 20
#define NMots 200
int i,nm,r,n,NmMots=NMots;
char M[N]="";
S(char M[]){
    char M1[N]="";
    strcpy(M1,M);
    n=strlen(M);
    M1[n]='a';
    M1[n+1]='\0';
    A(M1);
}
void A(char M[]){
	char M1[N]="";
    n=strlen(M);
    r=rand()%3;
    strcpy(M1,M);
    switch (r)
    {
    case 0:
    M1[n]='b';
    M1[n+1]='\0';
    A(M1);
    break;
    case 1:
     M1[n]='c';
    M1[n+1]='\0';
    A(M1);
    break;
    case 2:
    if (i<nm)
    {
        M1[n]='d';
        M1[n+1]='\0';
        printf("%s \n",M1);
    }
    break;
    }
    printf("\n");
}
main(){
    char M[N]="";
    do
    {
        /* code */
        printf("enter nb de mots");
        scanf("%d",&nm);
    } while ((nm<1)||(nm>NmMots));
    int i=0;
    while (i<nm)
    {
        strcpy(M,"");
        S(M);
        i++;
    }
    
}
