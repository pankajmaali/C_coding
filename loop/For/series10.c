//    1/1! + 2/2! + 3/3! + 4/4! + 5/5! -> 2.7083335

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    float fact = 1.0;
    float dev = 1.0;
    float sum=0.0;
    for(int i = 1,j=1;i<=n;i++,j++){
      fact=fact*i;
      dev=j/fact;
      sum=sum+dev;
        printf("%d/%d!",j,i);
        if(i<n)printf(" + ");
        
    }
printf(" = %f",sum);
    return 0;
}