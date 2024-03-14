#include<stdio.h>
#include<string.h>
int main(){
	char t[50];
	int i=0;
	int j;
	printf("enter the char: ");
	scanf("%s",&t);
	while(i != strlen(t)){
		for(j=0;j<=i;j++){
		printf("%c",t[j]);
		}
		printf("\n");
		i++;
	}
}
