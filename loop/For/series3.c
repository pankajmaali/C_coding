#include<stdio.h>
// 1!/1 + 2!/2 + 3!/3
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
int fact = 1;
int sum = 0;

int dev=1;

for(int i = 1;i<=n;i++){
    fact = fact*i;
    dev=fact/i;
    sum=sum+dev;
    printf("%d!/%d",i,i);
   if(i<n){
    printf(" + ");
   }

}
 printf(" = %d",sum);




    return 0;
}