#include<stdio.h>
#include<math.h>
int main (){
   
    // PRACTICE QUESTION 18
    // print the sum of first n natural numbers
    int sum=0, n;
    printf("enter sum of first n natural numbers");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        sum=sum+i;
    }
    printf("sum= %d\n",sum);

    for(int i=n; i>=1; i--){
 printf("%d\n",i);
}
}