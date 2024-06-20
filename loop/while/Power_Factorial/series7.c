//    x^2  + x^4  + x^6  -> 819
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
    //   dev=i/fact;
    if(i%2==0){
        
       sum=sum+power;
    }
    if(i<=n){
        
       printf("%d^%d",m,j);
    }
       if(i<n)printf(" + ");
       i++;
       j+=2;
   }
   printf(" = %f",sum);

    return 0;
}