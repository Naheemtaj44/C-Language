#include<stdio.h>
#include<math.h>
int main (){
    // PRACTICE QUESTION NO: 32
    // calculate the sum of first n natural numbers
// example: n=5, the sum is 1+2+3+4+5 = 15

int a,s=0,i;
printf("enter nmbr");
scanf("%d",&i);
for(a=1;a<=i;a++)
{
printf("+%d",a);
s=a+s;}
printf("=%d",s);
    return 0;
}
