//    1!/x^1 + 2!/x^2 + 3!/x^3 + 4!/x^4 + 5!/x^5  -> x = 2 -> 7.0
#include <stdio.h>

int main() {
    int n=5;
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
        fact=fact*i;
        dev=fact/power;
        sum=sum+dev;
        
        if(i<=n){
              printf("%d!/%d^%d",i,x,i);
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