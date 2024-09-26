#include<stdio.h>
#include<math.h>
int main (){
    //PRACTICE QUESTION NO: 25
    //Print reverse of the table for a number n
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 10; i >=1; i--) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}