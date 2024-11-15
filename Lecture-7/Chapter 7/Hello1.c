#include<stdio.h>

#include<math.h>
 int main (){

    //ponter Arithmetic
    //case 1
int age=23;
int *ptr=&age;
printf(" ptr=%u", ptr); //12
ptr++;
printf(" ptr=%u", ptr);//16
ptr--;
printf(" ptr=%u", ptr);//12
 //Case 2
float age1=100.00;
float *ptr=&age;
printf(" ptr=%u", ptr); //904
ptr++;
printf(" ptr=%u", ptr);//908
ptr--;
printf(" ptr=%u", ptr);//904

 char star='*';
char *ptr=&star;
printf(" ptr=%u", ptr); //27
ptr++;
printf(" ptr=%u", ptr);//28
ptr--;
printf(" ptr=%u", ptr);//27
return 0;

}