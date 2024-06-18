//2!/1  + 4!/3  + 6!/5  -> x = 2 -> 154.0
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
//     int m=2;
//  printf("Enter a number : ");
//     scanf("%d",&m);
    float fact = 1;
     float dev=1;
    float sum=0;
    float power=1;
    for(int i=1,j=2,a=1;i<=n*2;i++,j+=2,a+=2){
        fact=fact*i;
        //  power=power*m;
        
       
        dev=fact/i;
           sum=sum+dev;
       
       if(i<=n)printf("%d!/%d",j,a);
       if(i<n)printf(" + ");
        
    }
    
printf(" = %f",sum);
    return 0;
}