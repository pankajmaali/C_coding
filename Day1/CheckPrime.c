#include <stdio.h>
int main(){
int n,i;
printf("Enter a number : ");
scanf("%d",&n);
for( i=2;i<n;i++){
    if(n%i==0)break;
}
if(n==i){
    printf(" Yes %d is Prime Number : ",n);
    }
else {
    printf("No %d Is Not a Prime Number : ",n);
}

    return 0;
}