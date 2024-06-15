// 1/1! + 3/2! + 5/3! + 7/4! + 9/5!  -> 3.7
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    float fact = 1.0;
    float dev = 1.0;
    float sum=0.0;
    for(int i = 1,j=1;i<=n;i++,j+=2){
      fact=fact*i;
      dev=j/fact;
      sum=sum+dev;
        printf("%d/%d!",j,i);
        if(i<n)printf(" + ");
        
    }
printf(" = %f",sum);
    return 0;
}