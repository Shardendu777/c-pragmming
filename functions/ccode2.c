#include<stdio.h>
void printNamaste();
void printBonjour();
int main(){
    char ch;
    printf("enter i if you are an indian and f if you are a french:");
    scanf("%c",&ch);
    if(ch == 'i')
        printNamaste();
    else if(ch == 'f')
        printBonjour();
    else  
        printf("invalid");
    return 0;
}
void printNamaste(){
    printBonjour();
    printf("Namaste");
}
void printBonjour(){
    printf("Bonjour\n");
}