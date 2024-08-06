// Online C compiler to run C program online
#include <stdio.h>

int main() {
  char oprator;
int num1,num2,result;
printf("Enter a First number : ");
scanf("%d",&num1);
printf("Enter a oprator : ");
scanf("%s",&oprator);
printf("Enter a second number : ");
scanf("%d",&num2);
switch (oprator){
    case '+':
    result=num1+num2;
    printf("Answer %d",result);
    break;
    case '-':
    result=num1-num2;
    printf("Answer %d",result);
    break;
        case '*':
    result=num1*num2;
    printf("Answer %d",result);
    break;
    case '/':
    result=num1/num2;
    printf("Answer %d",result);
    break;
  
    default : 
    printf("Invalid Input : ");
}
    return 0;
}