#include<stdio.h>
#include<math.h>
#include<string.h>
//SWAP 2 number, a & b;
 //PRACTICE QUESTION NO: 44
 void swap(int a, int b);
  void _swap(int *a, int *b);
 int main (){

    int x=5, y=10;
    swap(x,y);
    printf("After swapping: x=%d, y=%d\n",x,y);
    _swap(&x,&y);
    printf("After swapping: x=%d, y=%d\n",x,y);
    return 0;
 }
 //call by reference
 void _swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swapping: a=%d, b=%d\n",*a,*b);
 }
 //call by value
 void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d, b=%d\n",a,b);
 }