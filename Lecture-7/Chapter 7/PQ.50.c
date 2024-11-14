#include<stdio.h>
#include<math.h>
//write a program to enter the price of three items and print their final cost with gst
int main (){
    float items[3];
    printf("Enter the number of items you want to purchase: ");
    scanf("%f", &items[0]);
      scanf("%f", &items[1]);
    scanf("%f", &items[2]);
    printf("total price1: %f\n", items[0]+0.19*items[0]);
    printf("total price1: %f\n", items[1]+0.19*items[1]);
    printf("total price1: %f\n", items[2]+0.19*items[2]);

    return 0;
}