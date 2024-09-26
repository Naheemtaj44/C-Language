// PRACTICE QUESTION NO:19
// print the table of number input by user
#include<stdio.h>
#include<math.h>
int main (){
   
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
     return 0;
}