#include <stdio.h>
#include <math.h>
int main(){
    //Declaration Instructions ,Declare var before using it

    // int a=22;
    // int b=a;
    // int c=b*2;
    // int a,b,c,d;
    // a=b=c=d=12;


    //Arithmetic Instructions
    // int a=12, b=66;
    // int sum=a+b;
    // int multiply =a*b;
    // int x, y=a*b;


    //power
    // int power= pow(a,b);
    // printf("power is : %d",power);


    //modular operator
    // printf("modelar %d",16%10);

    
    //relational operator

    printf("%d\n",2==2);
     printf("%d\n",2!=2);
      printf("%d\n",3>2);

      //logical operator
       printf("%d\n",4>2&& 6>4);
       printf("%d\n",4>6||6>4);
       printf("%d\n",4>2 || !(1>4));

       //assigment operator
       int a=12;
       int b=11;
       a+=b;
       printf("%d\n",a);
    return 0;

}