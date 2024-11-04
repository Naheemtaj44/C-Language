#include<stdio.h>
#include<math.h>
#include<string.h>
 //PRACTICE QUESTION NO: 42
 //sum of first n natural numbers
 int sum (int n);
 int main(){
    printf("sum is : %d\n",sum(5));
    return 0;
 }
 //recursive function
 int sum(int n){
if (n==1){
    return 1;
}
int sumNm1=sum(n-1);
int sumN=sumNm1 +n;
 }