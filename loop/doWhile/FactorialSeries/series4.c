// 1!/2 + 2!/3 + 3!/4 + 4!/5 + 5!/6  -> 27.466666666
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
    i++,j++;
  }while(i<=n);
printf(" = %f",sum);

    return 0;
}