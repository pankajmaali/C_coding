// 1!/1 + 2!/3 + 3!/5 + 4!/7 + 5!/9  -> 19.62857
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    float fact = 1.0;
    float dev = 1.0;
    float sum=0.0;
    for(int i = 1,j=1;i<=n;i++,j+=2){
       fact=fact*i;
       dev=fact/j;
       sum=sum+dev;
        printf("%d!/%d",i,j);
        if(i<n)printf(" + ");
        
    }
printf(" = %f",sum);
    return 0;
}