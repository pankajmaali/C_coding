// 1/1!  + 3/3!  + 5/5!  -> 1.54166
#include <stdio.h>

int main() {
     int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    float fact=1;
    float dev=1;
    float sum=0;
    for(int i=1,j=1;i<=n*2-1;i++,j+=2){
        fact=fact*i;
        dev=i/fact;
        if(i%2!=0){
            sum=sum+dev;
        }
        if(i<=n){
            printf("%d/%d!",j,j);
        }
        if(i<n)printf(" + ");
    }
    printf(" = %f",sum);

    return 0;
}