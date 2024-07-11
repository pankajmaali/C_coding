//  2!/1  + 4!/2  + 6!/3  -> 254.0
#include <stdio.h>

int main() {
int n;
int x;
printf("Enter a number : ");
scanf("%d",&n);
// printf("Enter a number : ");
// scanf("%d",&x);
float fact=1;
float dev=1;
float power=1;
float sum=0;
int i=1,j=2;
while(i<=n*2){
    fact=fact*i;
    // power=power*x;
    dev=fact/i*2;
    if(i%2==0){
        
    sum=sum+dev;
    }
    if(i<=n){

    printf("%d!/%d",j,i);
    }
    if (i<n)
    {
        printf(" + ");
    }
    
    i++,j+=2;
}
printf(" = %f",sum);
    return 0;
}