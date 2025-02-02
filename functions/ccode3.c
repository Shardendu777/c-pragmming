#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    sum(a,b);
    return 0;
}
int sum(int a,int b){
    int sum=a+b;
    printf("%d",sum);
}