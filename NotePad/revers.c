
#include <stdio.h>

int main() {

int rev = 0;
int n;
int rem;
printf("Enter a number : ");
scanf("%d",&n);
while(n!=0){
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
}
  printf("Reversed number = %d", rev);
  
}