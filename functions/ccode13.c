#include<stdio.h>
float converttemp(float celcius);
int main(){
	float celcius;
	printf("enter the temperature in celcius that you want to convert:");
	scanf("%f",&celcius);
	printf("%f",converttemp(celcius));
	return 0;
	  }
float converttemp(float celcius){
		float fahr= celcius * 9/5 + 32;
		return fahr;
				}