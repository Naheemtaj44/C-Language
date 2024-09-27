#include<stdio.h>
#include<math.h>
 int main(){

    // PRACTICE QUESTION 33
    // convert years into months and days.
    // 1 year = 12 months, 1 month = 30.44 days.
printf("This program will convert your age from years to months and days.\n");
float age, month, day;
printf("Enter Your Age\n");
scanf("%f",&age);

month=age*12;
day=age*365;
printf("Months=%f\n",month);
printf("days=%f",day);
    return 0;
}