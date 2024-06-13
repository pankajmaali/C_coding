// 1! + 2! + 3! + 4! + 5!
#include <stdio.h>
int main(){
   
int n;
printf("Enter a number : ");
scanf("%d",&n);
int sum = 0;

int fact=1;


for(int i = 1;i<=n;i++){
   fact=fact*i;
   sum=sum+fact;
    printf("%d!",i);   
 if(i<n){
    printf(" + ");
 }
}
printf(" = %d",sum);
    return 0;

}