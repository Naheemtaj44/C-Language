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
    return 0; 
}