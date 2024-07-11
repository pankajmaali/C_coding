// x^1 + x^2 + x^3 + x^4 + x^5  -> x = 2 -> 62
#include <stdio.h>

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  int x;
  printf("Enter a second number : ");
  scanf("%d",&x);
  int i=1,j=1;
  float sum=0;
  float fact=1;
  float dev=1;
  int power=1;
  do{
    // fact*=i;
//   dev=/fact;
power=power*x;
    sum+=power;
    printf("%d^%d",x,i);
    if(i<n)printf(" + ");
    i++,j+=2;
  }while(i<=n);
printf(" = %f",sum);

    return 0;
}