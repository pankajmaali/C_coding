// x^1/1 + x^2/2 + x^3/3 + x^4/4 + x^5/5  -> x = 2 -> 17.066668
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
  float power=1;
  do{
    // fact*=i;
power=power*x;
  dev=power/i;
    sum+=dev;
    printf("%d^%d/%d",x,i,i);
    if(i<n)printf(" + ");
    i++,j+=2;
  }while(i<=n);
printf(" = %f",sum);

    return 0;
}