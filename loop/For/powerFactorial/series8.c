//  x^2/2  + x^4/4  + x^6/6  -> x = 2 -> 16.666668

#include <stdio.h>

int main() {
      int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int m;
       printf("Enter a number : ");
    scanf("%d",&m);
    float power=1;
    float dev=1;
    float sum=0;
    for(int i=1,j=2;i<=n*2;i++,j+=2){
power=power*m;
dev=power/i;
if(i%2==0){
    sum=sum+dev;
}
    }
    printf("%f",sum);
    return 0;
}