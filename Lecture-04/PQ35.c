#include<stdio.h>
#include<math.h>
int main (){
    //PRACTICE QUESTION NO: 35
    // check if a character is vowel or not
    char c;
printf("enter ur number");
scanf("%c",&c);
switch(c)
{case 'a':
case'A':
case'e':
case'E':
case'i':
case'I':
case'u':
case'U':
case'o':
case'O':

printf("vowel");
break;
default:
printf("constant");}
    return 0;
}