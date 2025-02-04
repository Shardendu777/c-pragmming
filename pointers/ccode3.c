#include<stdio.h>
void dowork(int a,int b,int *sum,int *product,int *average);
int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    int sum,product;
    int average;
    dowork(a,b,&sum,&product,&average);
    printf("sum=%d,product=%d,average=%d",sum,product,average);
    return 0;    
}
void dowork(int a,int b,int *sum,int *product,int *average){
    *sum=a+b;
    *product=a*b;
    *average=(a+b)/2;
}