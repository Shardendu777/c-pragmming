#include<stdio.h>
float percentage(float m1,float m2,float m3);
int main(){
	float m1,m2,m3;
	printf("enter the marks of physics ,chemistry ,maths:");
	scanf("%f %f %f",&m1,&m2,&m3);
	printf("your percentage is:%f",percentage(m1,m2,m3));
	return 0;
	}
float percentage(float m1,float m2,float m3){
		float percent=((m1+m2+m3)/300)*100;
		return percent;
		}