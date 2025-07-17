#include<stdio.h>
#include<math.h>
int main (){
// PRACTICE QUESTION NO: 20
// keep taking number as inputs from user until user enter an odd number
int n;
do{
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\n", n);
    if(n%2!=0){
        break;
    }

}while(1);
printf("thank you\n");

 
  //keep taking number as inputs from user until user enter an odd number
    int a;
    printf("enter value\n");
    scanf("%d",&a);
    for(;;)
    if(a%2!=0){
        break;
    }
    printf("%d\n", a);
  
   
  printf("thank you\n");
return 0;


   
}