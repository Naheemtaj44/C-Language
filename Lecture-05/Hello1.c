#include<stdio.h>
//RECURSION
void printhello(int count);
int main(){
    printhello(10);  //function called
    return 0;
}
void printhello(int count){
    if (count==0){
        return;
    }
    printf("Hello World!\n");
    printfhello(count-1);
}