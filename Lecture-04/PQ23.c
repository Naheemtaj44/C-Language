#include<stdio.h>
#include<math.h>
int main (){
    // print all odd number from 5 to 50
    // PRACTICE QUESTION NO 23
    for(int i=5; i<=50; i+=2){
        printf("%d \n", i);
    }

    // another way to print
     for(int i=5; i<=50; i+=2){
        if(i%2!=0)
        {printf("%d ", i);}
     }
    return 0;
}