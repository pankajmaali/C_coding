// 1!/2 + 2!/3 + 3!/4 + 4!/5 + 5!/6  -> 27.466666666
#include <stdio.h>

int main() {
   int n;

   printf("Enter a number : ");
   scanf("%d",&n);
   float fact=1;
   float dev=1;
   float sum=0;
      int i = 1;
   int j=2;
   while(i<=n){
       fact=fact*i;
       dev=fact/j;
       sum=sum+dev;
       printf("%d!/%d",i,j);
       if(i<n)printf(" + ");
       i++;
       j++;
   }
   printf(" = %f",sum);

    return 0;
}