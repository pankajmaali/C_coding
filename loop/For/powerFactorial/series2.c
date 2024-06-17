//  2!/2  + 4!/4  + 6!/6  -> 127
#include <stdio.h>

int main() {
int n;
printf("Enter a number : ");
scanf("%d",&n);
int fact=1;
int sum = 0;
int dev = 1;
for(int i = 1,j=2;i<=n*2;i++,j+=2){
    fact=fact*i;
    dev=fact/i;
     
    if(i%2==0){
         sum=sum+dev;
       
    }
  
  
  if(i<=n){
       printf("%d!/%d",j,j);
  }
  
    if(i<n){
          
        printf(" + ");
    }
}
printf(" = %d",sum);
    return 0;
}