#include<stdio.h>
void squarev(int n);
void squarer(int *n);
int main(){
    int number;
    int *ptr=&number;
    printf("enter the number:");
    scanf("%d",&number);
    squarev(number);
    printf("value of number: %d\n",number);
    squarer(ptr);
    printf("value of number: %d\n",number);
    return 0;
}
void squarev(int n){
    n=n*n;
    printf("the value of number is:%d\n",n);
}
void squarer(int *n){
    (*n)=(*n)*(*n);
    printf("the value of number is: %d\n",*n);
}