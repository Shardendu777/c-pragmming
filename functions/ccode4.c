#include<stdio.h>
int sum(int a,int b);
    int main(){
    int a;
    int b;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("sum= %d\n",sum(a,b));
    return 0;
}
int sum(int x,int y){
    return x+y;
}