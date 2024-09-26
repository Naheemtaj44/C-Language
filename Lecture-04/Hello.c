#include<stdio.h>
#include<math.h>
int main (){
 // iterator counter
 //for loop
for(int i=1; i<5; i++)
{printf("Hello world \n");}

 
for(int n=1; n<100; n=n+1){
printf("%d \n",n);}


for(int n=10; n>1; n=n-1){
printf("%d \n",n);}



//loop in char and float
for(float n=1; n<100; n=n+1){
printf("%f \n",n);}


for(char ch='A'; ch<'Z'; ch++){
printf("%d \n",ch);}


//infinite loop
for(int z=1; ; z++)
{printf("Hello world \n");}



//while loop
int i=1;
while(i<5){
printf("Hello world \n");
i++;}


//do while loop
 int j=1;
 do{
 printf("Hello world \n");
 j++;}
 while(j<5);


//break
for(int z=1;z<=10 ; ++z){
    if(z==5){
        break;
    }
    printf("%d \n", z);
}
printf("end\n");


//continue
for(int z=1; z<=10 ; ++z){
    if(z==5){
        continue;
    }
    printf("%d \n", z);
}
printf("end\n");

return 0;
}