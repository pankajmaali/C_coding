// 1!/1 + 2!/2 + 3!/3 + 4!/5 + 5!/5  -> 34
#include <stdio.h>

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  int i=1;
  int sum=0;
  int fact=1;
  int dev=1;
  do{
    fact*=i;
   dev=fact/i;
    sum+=dev;
    printf("%d!/%d",i,i);
    if(i<n)printf(" + ");
    i++;
  }while(i<=n);
printf(" = %d",sum);

    return 0;
}