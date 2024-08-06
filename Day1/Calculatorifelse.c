// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char oprator;
   int num1,num2,sum=0;
   printf("enter a number : ");
   scanf("%d",&num1);
    printf("Enter a symbol :"); 
  scanf("%s",&oprator);
     printf("enter a Second number : ");
  scanf("%d",&num2);
  
   if(oprator=='+'){
        sum=num1+num2;
   printf("%d",sum);
   }
   else if(oprator=='-'){
       sum=num1-num2;
       printf("%d",sum);
   }
   else if(oprator=='*'){
       sum=num1*num2;
       printf("%d",sum);
   }
  else if(oprator=='/'){
       sum=num1/num2;
       printf("%d",sum);
   }
   else{
       printf("Invalid ");
   }
  
   
    return 0;
}