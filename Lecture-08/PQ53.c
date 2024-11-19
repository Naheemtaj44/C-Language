#include<stdio.h>
#include<math.h>
//PRACTICE QUESTION NO: 53
//Make a program that input user name and print it's 
 int countLength(char arr[]);
int main(){
    char name[100];
fgets(name,100,stdin);
printf("length is :%d",countLength(name));
    return 0;
    return 0;
}
int countLength(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){

        count++;
    }
    return count-1;
}