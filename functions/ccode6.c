#include<stdio.h>
float areasquare(float side);
float areacircle(float radius);
float arearectangle(float l,float b);
int main(){
    float side,radius,l,b;
    printf("enter the values of side of square,radius of circle,length and breadth of rectangle:");
    scanf("%f %f %f %f",&side,&radius,&l,&b);
    printf("area of square is: %f\n",areasquare(side));
    printf("area of circle is:%f\n",areacircle(radius));
    printf("area of rectangle if:%f\n",arearectangle(l,b));
    return 0;
}
float areasquare(float side){
    return side*side;
}
float areacircle(float radius){
    return 3.14*radius*radius;
}
float arearectangle(float l,float b){
    return l*b;
}
