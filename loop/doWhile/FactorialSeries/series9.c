//1/1! + 3/2! + 5/3! + 7/4! + 9/5!  -> 3.7
#include <stdio.h>

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  int i=1,j=1;
  float sum=0;
  float fact=1;
  float dev=1;
  do{
    fact*=i;
   dev=j/fact;
    sum+=dev;
    printf("%d/%d!",j,i);
    if(i<n)printf(" + ");
    i++,j+=2;
  }while(i<=n);
printf(" = %f",sum);

    return 0;
}