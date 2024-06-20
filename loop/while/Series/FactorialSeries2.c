//1! + 2! + 3! + 4! + 5! -> 153
#include <stdio.h>

int main() {
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);
   int sum=0;
   int fact=1;
   int i=1;
   while(i<=n){
       printf("%d!",i);
     fact=fact*i;
     sum=sum+fact;
       i++;
       if(i<=n){
           
       printf(" + ");
       }
   }
   printf(" = %d",sum);

    return 0;
}