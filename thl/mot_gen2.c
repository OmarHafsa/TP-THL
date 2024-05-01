#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 20
#define NMots 200
int i,nm,NmMots=NMots;
char M[N]="";
void S(char M[]){
	char M1[N]="";
	int n,r;
	n=strlen(M);
	r=rand()%2;
	strcpy(M1,M);
	switch (r)
	{
	case 0: 
		/* code */
		M1[n]='a';
		M1[n+1]='\0';
		S(M1);
		break;
	
	case 1:
	if (i<nm){
		M1[n]='d';
		M1[n+1]='\0';
		printf("%s",M1);
	}
	
		break;
	}
printf("\n");
}
 main()
{
	do{
		printf("enter le nb de mots");
		scanf("%d",&nm);
	}while((nm<1)||(nm>NmMots));
	int i=0;
	while(i<nm){
		strcpy(M,"");
		S(M);
		i++;
	}

}
