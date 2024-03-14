#include<stdio.h>
#include<string.h>
int main(){
	char t[50];
	int size;
	int i=0;
	int j;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the char: ");	
	while(i != size){
	scanf("%c",&t[i]);
	i++;
	}
	i=0;
	while(i != size){
	   if(t[i]!=" "){
	   
		printf("%c",t[i]);
		}
        i++;
}
}
