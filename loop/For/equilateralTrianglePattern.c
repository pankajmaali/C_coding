// 5
// 454
// 34543
// 2345432
// 123454321

#include <stdio.h>

int main() {
 int n;
 printf("Enter a number : ");
 scanf("%d",&n);
 int a=1;
 
 for(int i=n;i>=1;i--){
 for(int j=i;j<=n;j++){
     printf("%d",j);
 }
 for(int k=n-1;k>=i;k--){
     printf("%d",k);
 }
   
     printf("\n");
 }

    return 0;
}