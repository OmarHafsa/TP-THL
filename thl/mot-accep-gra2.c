#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 20
char M[N]="",symb;
int i,accepte,n;
void S(){
    if (symb=='a') {
        if (i<n)
        {
            accepte=1;
            symb=M[i++];
            A();
        }else{
            accepte=0;
        }
    }
    }
void A(){
    if(symb=='b'){
        if (i<n)
        {
            accepte=1;
            symb=M[i++];
            A();
        }else{
            accepte=0;
        }
    }if(symb=='c'){
        if (i<n)
        {
            accepte=1;
            symb=M[++i];
            A();
        }else{
            accepte=0;
        }
    }if(symb=='d'){
        if (i==n)
        {
            accepte=1;
        }else{
            accepte=0;
        }
    }
    }
main(){
    printf("enter la chaine");
    scanf("%s",&M);
    n=strlen(M);
    symb=M[i++];
    S();
    if(accepte==1){
        printf("accepte");
    }else{
        printf("n'accepte pas");
    }
}
