// x^1  + x^3  + x^5  -> x = 2 -> 42.000000
#include <stdio.h>

int main() {
    int n=3;
    float dev=1;
    float power=1;
    int x=2;
    float sum=0;
    float fact=1;
    int i=1,j=1;
    
    // printf("Enter a number of loop : ");
    // scanf("%d",&n);
    // printf("Enter a  number of power :");
    // scanf("%d",&x);
    do{
        power=power*x;
        // fact=fact*i;
        
        // dev=i/power;
        if(i%2!=0){
            
        sum=sum+power;
        }
        
        if(i<=n){
              printf("%d^%d",x,j);
        }
        if(i<n){
            printf(" + ");
        }
        i++;
        j+=2;
    }while(i<=n*2);
    printf(" = %f",sum);
  
    return 0;
}