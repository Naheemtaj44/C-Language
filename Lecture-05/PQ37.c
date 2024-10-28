#include<stdio.h>
#include<math.h>
#include<string.h>
 //PRACTICE QUESTION NO: 37
//write a function that prints "namaste" if user is indian and bonjour if the user is french
void namaste();

void bonjour();
int main(){
    printf("f for french and i for india :");

char ch;

scanf("%c",&ch);

if(ch=='i'){

    namaste();
}
else{
    bonjour();
}
    return 0;
}
void namaste()
{
    printf("namaste\n");
    
}
void bonjour()
{
    printf("bonjour\n");
}