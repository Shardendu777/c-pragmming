#include<stdio.h>
int fac(int n);
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("fac=%d",fac(n));
	return 0;
}
int fac(int n){
	if(n==1){
        return 1;
    }
	int facNm1=fac(n-1);
	int facN=facNm1*n;
	return facN;
}