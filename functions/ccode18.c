#include<stdio.h>
void temp(float t);
int main(){
    float t;
    printf("enter the temperature:");
    scanf("%f",&t);
    temp(t);
    return 0;
}
void temp(float t){
    if(t<15){
        printf("cold");
    }
    else if (t>15 && t<30){
        printf("normal");
    }
    else 
        printf("hot");
   
 }
