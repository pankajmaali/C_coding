// 2/1! + 3/2! + 4/3! + 5/4! + 6/5!  -> 4.425
#include <stdio.h>

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  int i=1,j=2;
  float sum=0;
  float fact=1;
  float dev=1;
  do{
    fact*=i;
   dev=j/fact;
    sum+=dev;
    printf("%d/%d!",j,i);
    if(i<n)printf(" + ");
    i++,j++;
  }while(i<=n);
printf(" = %f",sum);

    return 0;
}