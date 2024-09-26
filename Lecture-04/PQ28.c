#include<stdio.h>
#include<math.h>
int main (){
    //PRACTICE QUESTION 28
    int i, j;
    // Outer loop for the number of rows (5 rows)
    for (i = 0; i < 5; i++) {
        // Inner loop for printing 5 stars in each row
        for (j = 0; j < 5; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}