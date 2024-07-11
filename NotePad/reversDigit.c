
#include <stdio.h>

int main() {
   int n;
   int rev = 0;
   int rem;
   printf("Enter a number : ");
   scanf("%d",&n);
   while(n!=0){
       rem = n%10;
       rev = rev * 10 + rem;
       n/=10;
   }
   printf("%d",rev);
    return 0;
}