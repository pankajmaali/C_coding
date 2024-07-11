#include <stdio.h>
void main()
{
int a;
printf("enter a number");
scanf("%d",&a);
if(a%2==0){
    printf("yes divided by 2 : ");
    if(a%5==0){
         printf("yes divided by 2 & 5 : ");
         if(a%7==0){
            printf("yes divided by 2 & 5 & 7 : ");
         }
         
    }
  
}
else{
    printf("not divided");
}
}