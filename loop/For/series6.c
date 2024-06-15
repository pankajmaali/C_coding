#include<stdio.h>
// 1!/2 + 2!/4 + 3!/6 + 4!/8 + 5!/10 -> 17.0

int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
float fact = 1;
float dev = 1;
float sum = 0;

for(int i = 1,j=2;i<=n;i++,j+=2){
    fact=fact*i;
    dev=fact/j;
     sum=sum+dev;

 printf("%d!/%d",i,j);
 
 if(i<n)printf(" + ");

}
printf(" = %f",sum);


return 0;
}