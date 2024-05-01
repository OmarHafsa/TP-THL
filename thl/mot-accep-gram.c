#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 20
char M[N] ,symb;
int i,accepte,stop,n;
void S(){
    if(symb=='a'){
        if(i<n){
            symb=M[i++];
            accepte=1;
            S();
        }else{
            accepte=0;
        }
    }if(symb=='b'){
        if(i==n){
            accepte=1;
        }else{
            accepte=0;
        }
    }else{
        accepte=0;
    }
}
int main(){
    printf("entrer la chaine : ");
    scanf("%s",M);
    n=strlen(M);
    symb=M[i++];
    S();
    if(accepte==1){
        printf("accepte");
    }else{
        printf("non accepte");
    }
    return 0;
}
