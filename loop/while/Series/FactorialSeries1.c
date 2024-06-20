//1 - 2 + 3 - 4 + 5 = -3
#include <stdio.h>

int main() {
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);
   int sum=0;
   int i=1;
   while(i<=n){
       printf("%d",i);
       if(i%2==0){
           printf(" + ");
           sum+=i;
       }
       else{
           sum-=i;
       }
       if(i<n&&i%2!=0){
           printf(" - ");
       }
       i++;
   }
   printf(" = %d",sum);

    return 0;
}