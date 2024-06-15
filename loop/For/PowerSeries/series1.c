//  x^1 + x^2 + x^3 + x^4 + x^5  -> x = 2 -> 62
#include <stdio.h>

int main() {
int n;
   printf("Enter a line number : ");
   scanf("%d",&n);
   int m;
   printf("Enter a number : ");
   scanf("%d",&m);
   int power=1;
   int sum = 0;

for(int i= 1,j=1;i<=n;i++,j++){
    power=power*m;
    sum=sum+power;
}
printf("%d",sum);

   return 0;
   }