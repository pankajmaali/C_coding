// 2! + 4! + 6! + 8! + 10! => 3669866
#include <stdio.h>

int main() {
int n;
printf("Enter a number : ");
scanf("%d",&n);
int fact=1;
int sum = 0;

for(int i = 1,j=2;i<=n*2;i++,j+=2){
    fact=fact*i;
     
    if(i%2==0){
         sum=sum+fact;
       
    }
  
  
  if(i<=n){
       printf("%d!",j);
  }
  
    if(i<n){
          
        printf(" + ");
    }
}
printf(" = %d",sum);
    return 0;
}