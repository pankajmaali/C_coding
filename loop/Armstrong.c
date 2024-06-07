
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
       rev+=rem*rem*rem;
       n/=10;
   }
   if(rev==copy){
       printf("%d is a Armstrong number.", copy);
   }
   else {
       printf("%d is not Armstrong number.", copy);
   }

    return 0;
}