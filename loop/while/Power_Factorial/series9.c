//     2/x^2  + 4/x^4  + 6/x^6  -> x = 2 -> 0.843750
#include <stdio.h>

int main() {
   int n;
   int m;
   printf("Enter a number : ");
   scanf("%d",&n);
  printf("Enter a second number : ");
  scanf("%d",&m);
   float power=1;
   float dev=1;
   float sum=0;
   float fact=1;
   int i = 1;
   int j=2;
   while(i<=n*2){
    //   fact=fact*i;
      power=power*m;
      dev=i/power;
    if(i%2==0){
        
       sum=sum+dev;
    }
    if(i<=n){
        
       printf("%d/%d^%d",j,m,j);
    }
       if(i<n)printf(" + ");
       i++;
       j+=2;
   }
   printf(" = %f",sum);

    return 0;
}