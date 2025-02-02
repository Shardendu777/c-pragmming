#include<stdio.h>
int fac(int n);
int main(){
    int n;
    printf("enter the  number:");
    scanf("%d",&n);
    printf("%d",fac(n));
    return 0;
}
int fac(int n){
    if(n==1){
        return 1;
    }
    int Nm1=fac(n-1);
    int N=Nm1*n;
    return N;
    }