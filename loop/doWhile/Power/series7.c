//  1/x^1 + 3/x^2 + 5/x^3 + 7/x^4 + 9/x^5  -> x = 2 -> 2.59375
#include <stdio.h>

int main() {
    int n=5;
    float dev=1;
    float power=1;
    int x=2;
    float sum=0;
    int i=1,j=1;
    
    // printf("Enter a number of loop : ");
    // scanf("%d",&n);
    // printf("Enter a  number of power :");
    // scanf("%d",&x);
    do{
        power=power*x;
        dev=j/power;
        sum=sum+dev;
        
        if(i<=n){
              printf("%d/%d^%d",j,x,i);
        }
        if(i<n){
            printf(" + ");
        } 
        i++;
        j+=2;
    }while(i<=n);
    printf(" = %f",sum);
  
    return 0;
}