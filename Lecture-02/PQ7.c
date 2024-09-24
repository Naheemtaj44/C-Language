#include<stdio.h>
#include<math.h>
int main() {
//PRACTICE QUESTION 07
 // check if given character is digit or not
 char ch;

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is not a digit.\n", ch);
    }
    return 0;
}
