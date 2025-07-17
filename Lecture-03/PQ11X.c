#include <stdio.h>
int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility by 5 and 7 using the ternary operator
    (num % 5 == 0 && num % 7 == 0) ? printf("%d is divisible by both 5 and 7.\n", num) : 
    printf("%d is not divisible by both 5 and 7.\n", num);

    return 0;
}
