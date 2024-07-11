// 1! + 2! + 3! + 4! + 5! -> 101
#include <stdio.h>

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  int i=1;
  int sum=0;
  int fact=1;
  do{
    fact*=i;
    sum+=fact;
    printf("%d!",i);
    if(i<n)printf(" + ");
    i++;
  }while(i<=n);
printf(" = %d",sum);

    return 0;
}