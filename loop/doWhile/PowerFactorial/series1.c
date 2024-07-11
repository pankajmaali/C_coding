//     2!  + 4!  + 6!  +8! + 10!  ->  3669866.000000
#include <stdio.h>

int main() {
    int n=5;
    float dev=1;
    float power=1;
    int x=2;
    float sum=0;
    float fact=1;
    int i=1,j=2;
    
    // printf("Enter a number of loop : ");
    // scanf("%d",&n);
    // printf("Enter a  number of power :");
    // scanf("%d",&x);
    do{
        // power=power*x;
        fact=fact*i;
        // dev=fact/power;
        if(i%2==0){
            
        sum=sum+fact;
        }
        
        if(i<=n){
              printf("%d!",j);
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