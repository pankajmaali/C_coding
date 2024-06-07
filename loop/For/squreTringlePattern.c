#include <stdio.h>

int main() {
 int n;
 int i;
 int j;
 int k;
 printf("Enter a number : ");
 scanf("%d",&n);
 for(i = n;i>=1;i--){
   for(k = 1;k<=i-1;k++){
       printf(" ");
   }
     for(j = n; j>=1;j--){
         printf("* ");
     }
     printf("\n");
 }

    return 0;
}