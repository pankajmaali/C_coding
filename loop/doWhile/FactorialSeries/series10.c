//1/1! + 2/2! + 3/3! + 4/4! + 5/5! -> 2.7083335
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
   dev=i/fact;
    sum+=dev;
    printf("%d/%d!",i,i);
    if(i<n)printf(" + ");
    i++,j+=2;
  }while(i<=n);
printf(" = %f",sum);

    return 0;
}