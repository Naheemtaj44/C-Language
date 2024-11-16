#include<stdio.h>
#include<math.h>
#include<string.h>
void printAdress0(int *n);
void printAdress(int n);
//will the adress output be same ?
 //PRACTICE QUESTION NO: 48
 int main(){
    int n=4;
    printfAdress(n);
    printf("adress of n is : %u\n", &n);
    printfAdress0(&n);
    printf("adress of n is : %u\n", &n);
    return 0;
 }
 //call by value
 void printAdress(int n){
    printf("adress of n is : %u\n", &n);
 }
 //call by reference
 void printAdress0(int *n){
    printf("adress of n is : %u\n", n);
 }