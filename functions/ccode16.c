#include<stdio.h>
int sumofd(int n);
int main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	printf("sum of the digits of n is=%d",sumofd(n));
	return 0;
	}
int sumofd(int n){
	int a,sum=0;
	while(n>0){
		a=n%10;
		sum=sum+a;
		n=n/10;
		}
	return sum;
		}