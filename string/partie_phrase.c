#include<stdio.h>
#include <stdlib.h>
int main(){
	char t[50];
	int n,i;
	printf("enter the paragraph");
	scanf("%s",&t);
	printf("enter a number");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%s \n",t);
	}
}
