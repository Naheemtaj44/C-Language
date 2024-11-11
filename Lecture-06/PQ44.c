#include<stdio.h>
#include<math.h>
#include<string.h>
 //PRACTICE QUESTION NO: 44
int main() {
int age=22;
int *ptr=&age;
int _age=*ptr;
printf("%d\n",_age);
printf("%p\n",&age);
printf("%p\n",ptr);
printf("%p\n",*ptr);
//or
printf("%u\n",&age);
printf("%u\n",ptr);
printf("%u\n",*ptr);
    return 0;
}