#include<stdio.h>
#include<math.h>
#include<string.h>
void square(int n);
void _square(int* n);
int main(){
    int number=4;
    square(number);
    printf( "number is=%d\n", number);
    _square(&number);
    printf( "number is=%d\n", number);
    return 0;
}
//call by value
void square(int n){
   n= n*n;
    printf("Square of is %d\n",n);
}
//call by reference
void _square(int* n){
       *n= (*n) * (*n);// 4 * 4
       printf("Square of is %d\n",*n);
}