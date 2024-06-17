// 2/2!  + 4/4!  + 6/6!  -> 1.175
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    float fact=1;
    float dev=1;
    float sum=0;
    
    for(int i=1,j=2;i<=n*2;i++,j+=2){
        fact=fact*i;
        dev=i/fact;
        if(i%2==0){
            sum=sum+dev;
        }
        if(i<=n){
            printf("%d/%d!",j,j);
        }
        if(i<n){
            printf(" + ");
        }
        
    }
printf(" = %f",sum);
    return 0;
}