#include<stdio.h>
#include<math.h>
float squareroot(int n);
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("the square root of the number is %f",squareroot(n));
	return 0;
	}
float squareroot(int n){
	int a=sqrt(n);
	return a;
			}