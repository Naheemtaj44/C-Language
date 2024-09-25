#include<stdio.h>
#include<math.h>
int main (){

    // PRACTICE QUESTION 10
    // Write a program to check if a student's marks are within the range of 0-100. If the marks are less than or equal to 30, print "fail:". Otherwise, print "pass:".

// SOLUTION:
int marks;
printf("Enter your marks(1-100): ");
scanf("%d",&marks);
if(marks>=0 && marks<=30)
{
    printf("fail:");
}
else if(marks>=31 && marks<=100)
{printf("pass:");}

// same question in ternary operators
int mark;
printf("Enter your marks(1-100): ");
scanf("%d",&mark);
(mark>=0 && mark<=30)? printf("fail:") : printf("pass:");


    return 0;
}