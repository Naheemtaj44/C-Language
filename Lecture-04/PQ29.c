#include<stdio.h>
#include<math.h>
int main (){
    //PRACTICE QUESTION NO:29
int  a;
printf("enter number");
scanf("%d",&a);
for(int i=1; i<a ; i++){
for(int b=1; b<i; b++)
printf("*");
printf("\n");}
return 0;}