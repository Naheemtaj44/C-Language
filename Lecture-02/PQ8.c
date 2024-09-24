#include<stdio.h>
#include<math.h>
int main() {
    //PRACTICE QUESTION:08
    // three number average
    float num1, num2, num3, average;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter third number: ");
    scanf("%f", &num3);

    // Calculate average
    average = (num1 + num2 + num3) / 3;
// Output the result
    printf("The average of the three numbers is: %.2f\n", average);
return 0;}