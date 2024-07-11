// x^1/1 + x^2/3 + x^3/5 + x^4/7 + x^5/9  -> x = 2 -> 10.77
#include <stdio.h>

int main() {
    int n;
    float dev=1;
    float power=1;
    int x;
    float sum=0;
    int i=1,j=1;
    
    printf("Enter a number of loop : ");
    scanf("%d",&n);
    printf("Enter a  number of power :");
    scanf("%d",&x);
    do{
        power=power*x;
        dev=power/j;
        sum=sum+dev;
        
        if(i<=n){
              printf("%d^%d/%d",x,i,j);
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