#include<stdio.h>
void printNamaste();
void printBonjour();
int main(){
    int d;
    printf("enter 1 if you are an indian and 0 if you are a french:");
    scanf("%d",&d);
    if(d<0 || d>1)
        printf("invalid");
    else if(d==1)
        printNamaste();
    else if(d==0)
        printBonjour();
    return 0;
}
void printNamaste(){
    printf("Namaste");
}
void printBonjour(){
    printf("Bonjour");
}