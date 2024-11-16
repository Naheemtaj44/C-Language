#include<stdio.h>
#include<math.h>
//ask the user to enter their firstName and print it back to them
//PRACTICE QUESTION NO: 51
int main (){
    char firstName[100];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Your first name is: %s\n", firstName);
    return 0;
}
