#include<stdio.h>
#include<math.h>
#include<string.h>
 //PRACTICE QUESTION NO: 46
 //print the value of 'i'from its pointer to pointer
 int main (){
   int i=5;
   int *ptr1=&i;
   int **ptr2=&ptr1;
   printf("i = %d\n",i);
   

    return 0;
 }