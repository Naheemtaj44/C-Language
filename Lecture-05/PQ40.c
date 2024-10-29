#include<stdio.h>
#include<math.h>
#include<string.h>
 //PRACTICE QUESTION NO: 40
//Write functions to calculate area of a square a circle and a rectangle
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
     float a=5;
 float b= 10;
 printf(" area is :%f\n", rectangleArea(a,b));
 float side=6;
 printf("area :%f\n",squareArea(side));
 float rad= 6;
 printf("area is: %f",circleArea(rad));
    return 0;
} 
float squareArea(float side){
    return side*side;
}
float circleArea(float rad){
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b){
    return a *b;
}