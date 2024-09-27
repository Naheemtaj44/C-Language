#include<stdio.h>
#include<math.h>
int main (){
   
//PRACTICE QUESTION NO:29
//find minimum number of elements
int a,b,c,d;
printf("enter ur nmbr");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b && a<c && a<d)
printf("%d is minimum",a);
else if(b<a && b<c && b<d)
printf("%d is minimum",b);
else if(c<a && c<b && c<d)
printf("%d is minimum",c);
else
printf("%d is minimum",d);
    return 0;}