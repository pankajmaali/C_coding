//  2!/1  + 4!/2  + 6!/3  -> 254.0
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    float fact = 1;
     float dev=1;
    float sum=0;
    for(int i=1,j=2;i<=n*2;i++,j+=2){
        fact=fact*i;
        dev=fact/i*2;
       if(i%2==0){
           sum=sum+dev;
       }
       if(i<=n)printf("%d!/%d",j,i);
       if(i<n)printf(" + ");
        
    }
    
printf(" = %f",sum);
    return 0;
}