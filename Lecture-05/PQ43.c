#include<stdio.h>
#include<math.h>
#include<string.h>
 //PRACTICE QUESTION NO: 43
 //Factorial of n.
 int fact (int n);
 int main(){
    printf("factorial is : %d\n",fact(5));
    return 0;
 }
 //recursive function
 int fact(int n){
if (n==0){
    return 1;
}
int factNm1=fact(n-1);
int factN=factNm1 *n;
return factN;
 }