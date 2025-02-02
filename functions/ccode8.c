#include<stdio.h>
void printhello(int count);
int main(){
    int count;
    printf("enter the value of count:");
    scanf("%d",&count);
    printhello(count);
    return 0;
}
void printhello(int count){
    if(count==0){
        return;
    }
    printf("hello world!\n");
    printhello(count-1);
}