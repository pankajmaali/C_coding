
#include <stdio.h>

int main() {
   int n;
   int rev = 0;
   int rem;
   int copy;
   printf("Enter a number : ");
   scanf("%d",&n);
   copy=n;
   while(n!=0){
       rem = n%10;
       rev = rev * 10 + rem;
       n/=10;
   }
   if(copy==rev){
       printf("this is a palindrome number %d",copy);
   }
   else {
       printf("not a palindrome  %d",copy);
   }

    return 0;
}