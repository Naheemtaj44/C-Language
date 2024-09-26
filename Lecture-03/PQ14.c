#include<stdio.h>
#include<math.h>
int main (){
     // PRACTICE QUESTION 15
     //Write a program in c language to check if a given numbers is Armstrong or not
     //// input 153 ---> 1*1*1 + 5*5*5 + 3*3*3 = 153
     int n, arm = 0, r, c;

    printf("Enter any Number: ");
    scanf("%d", &n);

    c = n; // Store the original number

    // Loop to calculate the sum of cubes of digits
    while (n > 0) {
        r = n % 10; // Get the last digit
        arm = (r * r * r) + arm; // Cube the digit and add to the sum
        n = n / 10; // Remove the last digit
    }

    // Check if the sum of cubes is equal to the original number
    if (c == arm)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
return 0;
}