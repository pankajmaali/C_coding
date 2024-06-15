// 1!/2 + 2!/3 + 3!/4 + 4!/5 + 5!/6  -> 27.466666666

#include <stdio.h>

int main() {
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);
   float fact = 1;
   float dev = 1;
   float sum = 0;
 
   for(int i = 1 , j=2;i<=n;i++,j++){
     fact=fact*i;
     dev=fact/j;
     sum=sum+dev;
     printf("%d!/%d",i,j);
     if(i<n)printf(" + ");
}
   printf(" = %f",sum);

    return 0;
}