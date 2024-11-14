#include<stdio.h>
#include<math.h>
int main (){
    //simple form
    // int mark1=34;
    // int mark2=25;
    // int mark3=76;

    // //array form
    // int marks[]={34,25,76};
    int marks[3];
    printf("enter physic mark :");
    scanf("%d",&marks[0]);
      printf("enter chemistary mark :");
      scanf("%d",&marks[1]);
        printf("enter math mark :");
        scanf("%d",&marks[2]);
        printf("physic is:%d,math is %d, chamistary is %d, ", &marks[2],&marks[0] ,&marks[1] );


  return 0; 
   
}