#include <stdio.h>
int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if number is even or divisible by 3 but not both using ternary operator
    ((num % 2 == 0) && (num % 3 != 0)) ? printf("%d is even but not divisible by 3.\n", num) :
    ((num % 3 == 0) && (num % 2 != 0)) ? printf("%d is divisible by 3 but not even.\n", num) :
    printf("%d is either both even or divisible by 3.\n", num);

    return 0;
}
