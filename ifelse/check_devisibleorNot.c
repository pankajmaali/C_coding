// WAP to check whether a number is divisible by 5 and 11 or not.

#include <stdio.h>

int main() {
int n;

printf("Enter a Number : ");
scanf("%d",&n);
if(n%5==0&&n%11==0){
    printf("the %d number devisible by 5 and 11: ",n);
}
else{
    printf("the %d number is Not Devisible by 5 and 11: ",n);
}


    return 0;
}