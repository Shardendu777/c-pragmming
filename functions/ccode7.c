#include<stdio.h>
void printhello(int count);
int main(){
    int count;
    printf("enter the no. of times you want to print hello:");
    scanf("%d",&count);
    printhello(count);
    return 0;
}
void printhello(int count){
    for(int i=1;i<=count;i++){
        printf("hello\n");
    }
}