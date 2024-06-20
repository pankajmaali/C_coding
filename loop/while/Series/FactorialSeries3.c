//1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 = 34
#include <stdio.h>

int main() {
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);
   int sum=0;
   int fact=1;
   int dev=1;
   int i=1;
   while(i<=n){
       printf("%d!/%d",i,i);
     fact=fact*i;
     dev=fact/i;
     sum=sum+dev;
       i++;
       if(i<=n){
           
       printf(" + ");
       }
   }
   printf(" = %d",sum);

    return 0;
}