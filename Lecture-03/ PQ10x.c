#include <stdio.h>
int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check positive, negative, or zero using the ternary operator
    (num > 0) ? printf("%d is positive.\n", num) :
    (num < 0) ? printf("%d is negative.\n", num) :
                printf("%d is zero.\n", num);

    return 0;
}
