#include<stdio.h>
#include<math.h>
int main (){

    // PRACTICE QUESTION 13
    // Write a program to check if a character is an uppercase letter, lowercase letter, or neither.

    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("The entered character is an uppercase letter.");

    }
    else if(ch>='a' && ch<='z'){
        printf("The entered character is a lowercase letter.");
    }
    else{
        printf("The entered character is neither an uppercase nor a lowercase letter.");
    }
    return 0;}