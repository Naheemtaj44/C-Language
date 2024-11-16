#include<stdio.h>
#include<math.h>
//PRACTICE QUESTION NO: 51
// crate string firstName and LastName to store details of user and print all the character by using loops
void printString(char arr[]);
int main (){
char fristName[]={'N', 'A', 'E', 'E', 'M', '\0'};
char lastName[]={"T", 'A', 'J' ,'\0'};
printString(lastName);
printString(lastName);
return 0;
}
void printString(char arr[]){
    for(int i=0;  arr[i]!='\0';i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}