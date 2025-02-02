#include<stdio.h>
void Language(int d);
int main(){
    int d;
    printf("enter 1 if you are an indian, else enter 0 if you are french:");
    scanf("%d",&d);
    if (d<0 || d>1)
        printf("invalid");
    else
        Language(d);   
    return 0;
}
void Language(int d){
    if(d==1)
        printf("namaste");
    else
        printf("bonjour");
    
}