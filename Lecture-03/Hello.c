#include<stdio.h>
#include<math.h>
int main () {
int age;
printf("Enter your age: ");
scanf("%d",&age);
if(age>18){
    printf("You are an adult.\n");
    printf("thet can vote");
    printf("theycan drive ");}
    else{
    printf("You are a child.\n");}
    printf("thank you");



int age2;
printf("Enter your age: ");
scanf("%d",&age2);
if(age2>18){
    printf("You are an adult.\n");
    printf("thet can vote");
    printf("theycan drive ");}
     else if(age2>13 && age2<=18){
        printf("teenager ");
    }
    else{
    printf("You are a child.\n");}
    printf("thank you");

int age1;
printf("Enter your age: ");
scanf("%d",&age1);

age1>18? printf("adult: "):printf("teenager: ");





int day;
printf("Enter the day of the week (1-7): ");
scanf("%d",&day);
switch (day){
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid day of the week");
        break;
}




char day1;
printf("Enter the day of the week (1-7): ");
scanf("%s",&day1);
switch (day1){
    case 'm':
        printf("Monday");
        break;
    case 't':
        printf("Tuesday");
        break;
    case 'w':
        printf("Wednesday");
        break;
    case 'T':
        printf("Thursday");
        break;
    case 'f':
      printf("Friday");
         break;
     case 's':
         printf("Saturday");
         break;
     case 'S':
         printf("Sunday");
         break;
     default:
      printf("Invalid day of the week");
         break;
 }




int number;
printf("Enter a number: ");
scanf("%d",&number);
if(number>=0) {
    printf("positive number");
    if(number%2==0){
        printf(", even");
    }
    else{
    printf(", odd");
    }
    }
    else{
    printf("negative number");}


    return 0;
} 