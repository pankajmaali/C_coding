#include<stdio.h>
// 2/1! + 3/2! + 4/3! + 5/4! + 6/5!  -> 4.425

int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
float fact = 1;
float dev = 1;
float sum = 0;

for(int i = 2,j=1;i<=n+1;i++,j++){
    fact=fact*i-1;
    
     sum=sum+i/fact;

 

 printf("%d/%d!",i,j);
 if(i<=n)printf(" + ");

}
printf(" = %f",sum);


return 0;
}