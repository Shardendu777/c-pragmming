#include<stdio.h>
int printTable(int b);
int main(){
    int n;
    printf("enter the no. whose table you want:");
    scanf("%d",&n);
    printTable(n);
    return 0;
}
int printTable(int a){
    for(int i=1;i<=10;i++)
        {
            printf("%d\n",i*a);
        }
}