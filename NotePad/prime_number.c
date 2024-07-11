
#include <stdio.h>

int main() {
   int i;
   int n;
   int s = 0;
   printf("enter the positive  number");
   scanf("%d",&n);
   if((n==0 || n==1)){
       s=1;
   }
   for(i = 2; i<=n/2; i++){
       if(n % i ==0){
           s=1;
       }
       
   }
   if(s==0){
       printf("prime number is %d",n);
   }
     else{
       printf("not a prime number %d",n);
   }
   

    return 0;
}