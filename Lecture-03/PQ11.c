
#include<stdio.h>
#include<math.h>
int main (){
    // PRACTICE QUESTION 10
    // Write a program to check students grade points

// SOLUTION:
int marks;
printf("Enter your marks(1-100): ");
scanf("%d",&marks);
if( marks<=30)
{
    printf("C \n");
}
else if(marks>=31 && marks<=70)
{printf("B\n");}

else if(marks>=71 && marks<=90)
{printf("A\n");}
else{printf("A+\n");}

   return 0;     }
   .