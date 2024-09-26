#include<stdio.h>
#include<math.h>
int main (){
    //PRACTICE QUESTION NO:27
    // write a program to check if given number is prime or not
    // input 7 ---> prime number

int n, count=0;

printf("Enter any Number: ");

scanf("%d",&n); 
for(int i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
printf("Prime Number");
else
printf("Not Prime Number");
    return 0;
}