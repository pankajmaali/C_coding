//1!/1 + 2!/3 + 3!/5 + 4!/7 + 5!/9  -> 19.62857
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
   dev=fact/j;
    sum+=dev;
    printf("%d!/%d",i,j);
    if(i<n)printf(" + ");
    i++,j+=2;
  }while(i<=n);
printf(" = %f",sum);

    return 0;
}