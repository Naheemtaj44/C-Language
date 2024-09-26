
#include<stdio.h>
#include<math.h>
int main (){
    // PRACTICE QUESTION 15
//Write a program in c language to check if a given number is a natural numbers

 int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a natural number
    if (number > 0) {
        printf("%d is a natural number.\n", number);
    } else {
        printf("%d is not a natural number.\n", number);
    }
return 0;}