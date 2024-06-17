//  1!  + 3!  + 5!  -> 127
#include <stdio.h>

int main() {
   int n;
printf("Enter a number : ");
scanf("%d",&n);
int fact=1;
int sum = 0;
// int dev = 1;
for(int i=1,j=1;i<=n*2-1;i++,j+=2){
    fact=fact*i;
    if(i%2!=0){
        sum=sum+fact;
        
    }
    if(i<=n){
        printf("%d!",j);
    }
    if(i<n){
        printf(" + ");
    }
}
printf(" = %d",sum);
    return 0;
}