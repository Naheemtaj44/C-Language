#include<stdio.h>
#include<math.h>
int main (){
    // PRACTICE QUESTION 17
 //print the number from 0 to n , if n is given by user
    int n;
    printf("enter number ");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {printf("%d ",i);
    ++i;
    }
  return 0; 
}