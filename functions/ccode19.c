#include<stdio.h>
#include<math.h>
int power(int n,int p);
int main(){
	int n,p;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the power:");
	scanf("%d",&p);
	printf("power on the number is:%d",power(n,p));
	return 0;
	}
int power(int n, int p){
	int pow= n**p;
	return pow;
	}