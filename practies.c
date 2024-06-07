// A
// BB
// CCC
// DDDD
// EEEEE
// EEEEE
// DDDD
// CCC
// BB
// A
#include <stdio.h>

int main() {
   int n;
   char i;
   int j;
   int k;
   int a;
   
   printf("Enter a number : ");
   scanf("%d",&n);
 for(i = 1;i<=n;i++){
     for(j = 1;j<=i;j++){
         printf("%c",i+64);
         
     }
     
 

    printf("\n");
 }
 
 for(i = n;i>=1;i--){
     
     for(a = i;a>=1;a--){
         printf("%c",i+64);
     }
     printf("\n");
 }
    return 0;
}