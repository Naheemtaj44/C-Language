#include<stdio.h>
#include<math.h>
#include<string.h>
 //PRACTICE QUESTION NO: 44
int main() {
    int x;
int *ptr;
ptr=&x;
*ptr=0; // x=0
printf("x = %d\n",x); //x=0
printf("*ptr = %d\n",*ptr);
//*ptr=0
*ptr +=5;
printf("x = %d\n",x);//x=5
printf("*ptr = %d\n",*ptr);
// *ptr=5
(*ptr)++;
printf("x = %d\n",x);//x=6
printf("*ptr = %d",*ptr);
//*ptr=6

    return 0;
}