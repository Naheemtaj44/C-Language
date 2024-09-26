#include<stdio.h>
#include<math.h>
int main (){
    //PRACTICE QUESTION NO:26
    // calcualte the sum of all number between 5 to 50 including 5 and 50
    int sum=0;
    for(int i=5; i<=50; i++){
        sum+=i;
    }
    printf("The sum of all number between 5 and 50 (including 5 and 50) is: %d\n", sum);
    return 0;
}