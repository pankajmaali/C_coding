//  2/2^2 + 4/2^4 + 6/2^6 = 0.843750
#include <stdio.h>

int main() {
  int n;
  int m;
  printf("Enter a number of line : ");
  scanf("%d",&n);
   printf("Enter a number of value : ");
  scanf("%d",&m);
//   float fact = 1;
  float dev=1;
  float power = 1;
  float sum = 0;
for(int i = 1,j=2;i<=n*2;i++,j+=2){
    power=power*m;
    dev=i/power;
    if(i%2==0){
        sum=sum+dev;
    }
    if(i<=n)printf("%d/%d^%d",j,m,j);
    if(i<n)printf(" + ");
}
printf(" = %f",sum);
    return 0;
}