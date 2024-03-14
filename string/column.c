#include<stdio.h>
#include<string.h>
int main(){
	char t[50];
	int i=0;
	int j;
	printf("enter the char: ");
	scanf("%s",&t);
	while(i != strlen(t)){
		printf("%c \n",t[i]);
		i++;
	}
}
