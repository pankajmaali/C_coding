// 1!/2 + 2!/4 + 3!/6 + 4!/8 + 5!/10 -> 17.0
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
   dev=fact/j;
    sum+=dev;
    printf("%d!/%d",i,j);
    if(i<n)printf(" + ");
    i++,j+=2;
  }while(i<=n);
printf(" = %f",sum);

    return 0;
}