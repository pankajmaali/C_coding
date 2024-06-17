// x^2  + x^4  + x^6  -> 819
#include <stdio.h>

int main() {
         int n;
printf("Enter a number : ");
scanf("%d",&n);
int power=1;
int sum = 0;
for(int i=1,j=2;i<=n*2;i++,j+=2){
    power=power*n;
    if(i%2==0){
    sum=sum+power;
    }
    if(i<=n){
        printf("%d^%d",n,j);
    }
    if(i<n){
        printf(" + ");
    }
}
printf(" = %d",sum);
    return 0;
}