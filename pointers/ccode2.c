#include<stdio.h>
void swapv(int a,int b);
void swapr(int *a,int *b);
int main(){
    int a,b,*ptra=&a,*ptrb=&b;
    printf("enter the values of a and b:");
    scanf("%d %d",&a,&b);
    swapv(a,b);
    printf("a=%d,b=%d\n",a,b);
    swapr(ptra,ptrb);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
void swapv(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d,b=%d\n",a,b);
}
void swapr(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d,b=%d\n",*a,*b);
}